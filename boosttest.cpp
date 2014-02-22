#include <boost/thread/thread.hpp>
#include <iostream>

#pragma comment(lib, "stage/libs/libboost_thread-vc100-mt-gd-1_45.lib")

void hello()
{
 std::cout <<
    "Hello world, I'm a thread!"
    << std::endl;
}

int main(int argc, char* argv[])
{
  boost::thread thrd(&hello);	
  thrd.join();
  return 0;
}