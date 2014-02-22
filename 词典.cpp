#include<iostream>
using namespace std;
struct voc
{
	char w1[11];
	char w2[11];
}word[100001];
char file[100001][11];
int mycompare(const void*elem1,const void*elem2)
{
	return strcmp((*(voc *)elem1).w2,(*(voc *)elem2).w2);
}
int mycompare2(const void*elem1,const void *elem2)
{
	return strcmp((char *)elem1,(*(voc *)elem2).w2);
}
int main()
{
	char s[30];
	int count=0;
	while (gets(s))
	{
		if (s[0]=='\0') break;
		sscanf(s,"%s %s",word[count].w1,word[count].w2);
		count++;
	}
	qsort(word,count,sizeof(voc),mycompare);
	int num=0;
	while (gets(s))
	{
		if (s[0]=='\0'||s[0]==EOF) break;
		sscanf(s,"%s",file[num]);
		num++;
	}
	for (int i=0;i<num;i++)
	{
		voc *p1;
		p1=(voc *)bsearch(file[i],word,count,sizeof(voc),mycompare2);
		if (p1==NULL) printf("eh\n");
		else printf("%s\n",p1->w1);
	}

	system("pause");
	return 0;
}