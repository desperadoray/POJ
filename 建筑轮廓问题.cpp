#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Building
{
	int start;
	int end;
	int height;
};

vector<Building> devide(vector<Building> building, int beg, int fin);
vector<Building> conquer(vector<Building> b1, vector<Building> b2);

int main()
{
	int n;
	cin>>n;
	vector<Building> outline;
	Building building;
	for(int i = 0; i < n; i++)
	{
		cin>>building.start>>building.end>>building.height;
		outline.push_back(building);
	}
	
	vector<Building> res = devide(outline, 0, n - 1);

	vector<Building>::iterator iter;

	/*for(iter = res.begin(); iter != res.end() - 1 ;)
	{
		cout<<iter->start<<' '<<iter->end<<' '<<iter->height<<endl;
		if(iter->end == (iter + 1)->start && iter->height == (iter + 1)->height)
		{
			iter->end = (iter + 1)->end;
			res.erase(iter + 1);
		}
		else iter++;
	}*/

	iter = res.begin();
	int startx = iter->start,starty = 0;
	for(;iter != res.end(); iter++)
	{
		if(iter->start > startx)
		{
			if(starty > 0)
				cout<<"D "<<starty<<endl;
			cout<<"R "<<iter->start - startx<<endl;
			startx = iter->start;
			starty = 0;
		}
		if(iter->height > starty)
		{
			cout<<"U "<<iter->height - starty<<endl;
		}
		else if(iter->height < starty)
		{
			cout<<"D "<<starty - iter->height<<endl;
		}
		cout<<"R "<<iter->end - iter->start<<endl;
		startx = iter->end;
		starty = iter->height;
	}
	if(starty > 0) cout<<"D "<<starty<<endl;
	return 0;
}


vector<Building> devide(vector<Building> building, int beg, int fin)
{
	if(fin == beg)
	{
		vector<Building> tmp;
		tmp.push_back(building.at(fin));
		return tmp;
	}
	vector<Building> out1, out2, result;
	out1 = devide(building, beg, (beg + fin)/2);
	out2 = devide(building, (fin + beg)/2 + 1, fin);
	result = conquer(out1, out2);

	/*vector<Building>::iterator it;
		cout<<endl;		
		for(it = result.begin(); it != result.end() ; it++)
		{
			cout<<it->start<<' '<<it->end<<' '<<it->height<<endl;
		}
		*/
	return result;
}

vector<Building> conquer(vector<Building> b1, vector<Building> b2)
{
	vector<Building>::iterator iter1, iter2;
	iter1 = b1.begin();
	iter2 = b2.begin();
	vector<Building> result;
	Building tmp;
	while(iter1 != b1.end() && iter2 != b2.end())
	{
		if(iter1->end <= iter2->start)
		{
			result.push_back(*iter1);
			iter1++;
		}
		else if(iter2->end <= iter1->start)
		{
			result.push_back(*iter2);
			iter2++;

		}
		else if(iter1->start >= iter2->start && iter1->end <= iter2->end)
		{
			if(iter1->height > iter2->height)
			{
				if(iter1->start > iter2->start)
				{
					tmp.start = iter2->start;
					tmp.height = iter2->height;
					tmp.end = iter1->start;
					result.push_back(tmp);
				}
				result.push_back(*iter1);
				//if(iter1->end < iter2->end)
				//{
					iter2->start = iter1->end;
				//}
				//else iter2++;
			}
			iter1++;
			
		}
		else if(iter2->start >= iter1->start && iter2->end < iter1->end)
		{
			if(iter2->height > iter1->height)
			{
				if(iter2->start > iter1->start)
				{
					tmp.start = iter1->start;
					tmp.height = iter1->height;
					tmp.end = iter2->start;
					result.push_back(tmp);
				}
				result.push_back(*iter2);
				//if(iter2->end < iter1->end)
				//{
					iter1->start = iter2->end;
				//}
				//else iter1++;
			}
			iter2++;
			
		}
		else if(iter1->start < iter2->start && iter1->end < iter2->end)
		{
			if(iter1->height >= iter2->height)
			{
				result.push_back(*iter1);
				iter2->start = iter1->end;
			}
			else
			{
				tmp.start = iter1->start;
				tmp.height = iter1->height;
				tmp.end = iter2->start;
				result.push_back(tmp);
			}
			iter1++;
		}
		else if(iter2->start < iter1->start && iter2->end < iter1->end)
		{
			if(iter2->height >= iter1->height)
			{
				result.push_back(*iter2);
				iter1->start = iter2->end;
			}
			else
			{
				tmp.start = iter2->start;
				tmp.height = iter2->height;
				tmp.end = iter1->start;
				result.push_back(tmp);
			}
			iter2++;
		}
	}
	while(iter1 != b1.end())
	{
		result.push_back(*iter1);
		iter1++;
	}
	while(iter2 != b2.end())
	{
		//cout<<"*********"<<endl;
		result.push_back(*iter2);
		iter2++;
	}
	
	return result;
}