#include "Test.h"
#include "LinkedListOfInts.h"
#include <iostream>
using namespace std;
void Test::run()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
}
void Test::test1()
{
    cout<<"Test 1:isEmpty() for empty list returns:";
    LinkedListOfInts list;
    bool emptyflag=false;
    bool nonemptyflag=false;
    if(list.isEmpty()==true)
    {
        emptyflag=true;
        cout<<boolalpha<<list.isEmpty()<<"\n";
    }
    else
    {
        emptyflag=false;
        cout<<boolalpha<<list.isEmpty()<<"\n";
    }
    list.addFront(1);
    cout<<"Test 1:isEmpty() for nonempty list returns:";
    if(list.isEmpty()==true)
    {
        nonemptyflag=false;
        cout<<boolalpha<<list.isEmpty()<<"\n";
    }
    else
    {
        nonemptyflag=true;
        cout<<boolalpha<<list.isEmpty()<<"\n";
    }
    if(nonemptyflag&&emptyflag)
    {
        cout<<"Test 1:PASSED\n\n";
    }
    else
    {
        cout<<"Test 1:FAILED\n\n";
    }
}
void Test::test2()
{
    cout<<"Test 2:size() for empty list:";
    LinkedListOfInts list;
    int size_emp=list.size();
    cout<<"returns "<<size_emp<<endl;
    list.addFront(1);
    int size_nonemp=list.size();
    cout<<"Test 2:size() for list with size 1:";
    cout<<"returns "<<size_nonemp<<endl;
    if(size_emp==0&&size_nonemp==1)
    {
        cout<<"Test 2:PASSED.\n\n";
    }
    else
    {
        cout<<"Test 2:FAILED.\n\n";
    }
}
void Test::test3()
{
    cout<<"Test 3:search(1) for empty list:";
    LinkedListOfInts list;
    bool emptysearch=list.search(1);
    cout<<"returns: "<<boolalpha<<emptysearch<<endl;
    list.addFront(1);
    cout<<"Test 3:search(1) for the list(1):";
    bool nonemptysearch=list.search(1);
    cout<<"returns: "<<boolalpha<<nonemptysearch<<endl;
    if(emptysearch==false&&nonemptysearch==true)
    {
        cout<<"Test 3:PASSED.\n\n";
    }
    else
    {
        cout<<"Test 3:FAILED.\n\n";
    }
}

void Test::test4()
{
    cout<<"Test 4:addBack() with 1,2,3,4,";
    LinkedListOfInts list;
    for(int i=1;i<=4;i++)
    {
        list.addBack(i);
    }
    if(list.toVector().back()==4)
    {
        cout<<"The back of the list return:"<<list.toVector().back()<<"\n";
        cout<<"Test 4:PASSED.\n\n";
    }
    else
    {
        cout<<"The back of the list return:"<<list.toVector().back()<<"\n";
        cout<<"Test 4:FAILED.\n\n";
    }
}
void Test::test5()
{
    cout<<"Test 5:addFront() with 1,2,3,4,";
    LinkedListOfInts list;
    for(int i=1;i<=4;i++)
    {
        list.addFront(i);
    }
    if(list.toVector().front()==4)
    {
        cout<<"The front of the list return:"<<list.toVector().front()<<"\n";
        cout<<"Test 5:PASSED.\n\n";
    }
    else
    {
        cout<<"The front of the list return:"<<list.toVector().front()<<"\n";
        cout<<"Test 5:FAILED.\n\n";
    }
}
void Test::test6()
{
    cout<<"Test 6:removeBack() for list (1,2,3,4)\n";
    LinkedListOfInts list;
    for(int i=1;i<=4;i++)
    {
        list.addBack(i);
    }
    list.removeBack();
    if(list.toVector().back()==3)
    {
        cout<<"Test 6:The front of the list return:"<<list.toVector().front()<<"\n";
        cout<<"Test 6:The back of the list return:"<<list.toVector().back()<<"\n";
        cout<<"Test 6:The size of the list return:"<<list.toVector().size()<<"\n";
        cout<<"Test 6:PASSED.\n\n";
    }
    else
    {
        cout<<"Test 6:The front of the list return:"<<list.toVector().front()<<"\n";
        cout<<"Test 6:The back of the list return:"<<list.toVector().back()<<"\n";
        cout<<"Test 6:The size of the list return:"<<list.toVector().size()<<"\n";
        cout<<"Test 6:FAILED.\n\n";
    }

}
void Test::test7()
{
    cout<<"Test 7:removeFront() for list(1,2,3,4)\n";
    LinkedListOfInts list;
    for(int i=1;i<=4;i++)
    {
        list.addBack(i);
    }
    list.removeFront();
    if(list.toVector().front()==2)
    {
      cout<<"Test 7:The front of the list return:"<<list.toVector().front()<<"\n";
      cout<<"Test 7:The back of the list return:"<<list.toVector().back()<<"\n";
      cout<<"Test 7:The size of the list return:"<<list.toVector().size()<<"\n";
      cout<<"Test 7:PASSED.\n";
  }
  else
  {
      cout<<"Test 7:The front of the list return:"<<list.toVector().front()<<"\n";
      cout<<"Test 7:The back of the list return:"<<list.toVector().back()<<"\n";
      cout<<"Test 7:The size of the list return:"<<list.toVector().size()<<"\n";
      cout<<"Test 7:FAILED.\n";
  }
}
