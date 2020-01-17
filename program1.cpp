#include<iostream>
using namespace std;
int poweriterative(int a,int b)
{
	int t=1;
	for(int i=b;i>0;i--)
	{
		t=t*a;
	}
	return t;
}
int powerrecursive(int a , int b)
{
	if(b!=0)
	return (a*powerrecursive(a,b-1));
	else
	return 1;
}
int fib_rec(int num)
{
	if(num==1||num==0)
	return num;
	else 
	return (fib_rec(num-1)+fib_rec(num-2));
}
int fib_ite(int num)
{
	int t1=0,t2=1,next=0;
	for(int i=1;i<=num;i++)
	{
		if(i==1)
		{
			cout<<t1;
			
		}
		 if(i==2)
		{
			cout<<t2;
		}
		else
		{
			next=t1;
			t1=t1+t2;
			t2=next;
			cout<<next;
		}
	}
	return 0;
}
int gcdrec(int a,int b)
{ 
   if(a<0||b<0)
   {
      cout<<"no!!!!";
        exit(0);
   }   
   else if(b==0)
        {
            return a;
        }
   else
   {
       return gcdrec(b,a%b);
    }
}
int gcd(int a,int b)
{
	int temp=0;
	while (b!=0)
	{
		temp=a;
		a=b;
		b=temp%b;
	}
	return a;
}
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int factrec(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	return a*factrec(a-1);
}



int main()
{
	char ch;
	do
	{
		int choice,c,base,pow,num,num1,num2,i;
		cout<<" \n\n enter your choice "<<endl;
		cout<<" enter 1 to power of 2 given no. "<<endl;
		cout<<" enter 2 to get fibonacci series "<<endl;
		cout<<" enter 3 to print gcd of 2 numbers "<<endl;
		cout<<" enter 4 to take factorial of a given number  "<<endl;

        cin>>choice;
        switch(choice)
        {
        	case 1:
        		{
        			cout<<"press 1 for recursive function"<<endl;
        			cout<<"press 2 for iterative function"<<endl;
        			cin>>c;
        			if(c==1)
        			{
        				cout<<"enter base "<<endl;
        				cin>>base;
        				cout<<"enter power "<<endl;
        				cin>>pow;
        				cout<<"calculating power  using recursion "<<powerrecursive(base,pow)<<endl;
					}
					else if(c==2)
					{
					   	cout<<"enter base "<<endl;
        				cin>>base;
        				cout<<"enter power "<<endl;
        				cin>>pow;
        				cout<<"calculating power using iteration "<<poweriterative(base,pow)<<endl;
					}
					else
					{
						cout<<"invalid choice"<<endl;
					}
				}
				break;
			case 2:
				{
					cout<<"press 1 for recursive function"<<endl;
        			cout<<"press 2 for iterative function"<<endl;
        			cin>>c;
        			if(c==1)
        			{
        				cout<<"Enter the number of terms:";
                        cin>>num;
						cout<<"the series of "<<num<<"terms using recursion is: "<<endl;
							while(i<num)
						{
							cout<<fib_rec(i);
							i++;
						}
					}
						else if(c==2)
						{
							cout<<"Enter the number of terms:";
                            cin>>num;
                            cout<<"the series of "<<num<<"terms using iteration is: "<<endl;
                            fib_ite(num);
						}
						else
						{
							cout<<"invalid choice"<<endl;
						}
				}
			    break;	
				case 3:
					{
						cout<<"press 1 for recursive function"<<endl;
        				cout<<"press 2 for iterative function"<<endl;
        				cin>>c;
        				if(c==1)
        				{
        					cout<<"enter 2 numbers :"<<endl;
        					cin>>num1>>num2;
        					cout<<"the gcd of 2 numbers using recursion is :"<<gcdrec(num1,num2)<<endl;
						}
						else if(c==2)
						{
							cout<<"enter 2 numbers :"<<endl;
        					cin>>num1>>num2;
        					cout<<"the gcd of 2 numbers using iteration is :"<<gcd(num1,num2)<<endl;
						}
						else
						{
							cout<<"invalid choice"<<endl;
						}
					}
					break;
				case 4:
				{
						cout<<"press 1 for recursive function"<<endl;
        				cout<<"press 2 for iterative function"<<endl;
        				cin>>c;
        				if(c==1)
        			    {
        			    	cout<<"enter number "<<endl;
        			    	cin>>num;
        			    	cout<<"factorial of a given no. using recursion "<<factrec(num)<<endl;
						}
						else if (c==2)
						{
							cout<<"enter number "<<endl;
        			    	cin>>num;
        			    	cout<<"factorial of a given no. using iteration "<<factrec(num)<<endl;
						}
						else
						{
							cout<<"invalid choice"<<endl;
						}
				}
				break;
				default :
			cout<<" you enter wrong choice ";
			break ;	
		}
			cout<<" do you wish to continue (Y/N) : ";
			cin>>ch;   
			
	}while(ch=='Y');
	return 0;
}
