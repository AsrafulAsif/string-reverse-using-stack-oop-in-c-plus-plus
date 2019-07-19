#include <iostream>
#include<string>
#include"StackType.cpp"

using namespace std;

int main()
{
    StackType<string>myStack;
    StackType<string>myStack1;
    string temp;
    int n;
    //Enter length to now about length
    cout<<"Enter your string length:";
    cin>>n;
    cout<<"Now,Insert your string:"<<endl;
    //I am not able to use try catch if some add this ,take my love!!!
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        myStack.Push(temp);

    }


  cout<<"String in reverse order:"<<endl;
     while(!myStack.IsEmpty())
  {
      myStack1.Push(myStack.Top());
     cout<<myStack.Top()<<endl;

      myStack.Pop();
  }


    return 0;
}
