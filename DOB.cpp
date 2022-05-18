#include<iostream>
using namespace std ;
int main()
{
    //some sufficent variabele
    //ns stand for date after substraction in sum formate
     int d,m,y;
     int s;
     int td,tm,ty;
     int ts;
     int ns;
     int nd,ny,nm;
     int r;
    //Taking dob
    start:

    cout<<"warning! pls enter numberic value "<<endl;
    cout<<endl<<"Enter Date of Birth";
   d:
    cout<<endl<<"Day >";
    cin>>d;
   
    if(d>31||d<0)
    {
        cout<<endl<<"ohh! worng input";
        cout<<endl<<"Pls Re-entre"<<endl;
        goto d;
    }
   
    m:
    cout<<"Month >";
    cin>>m;
    if(m<0||m>12)
    {
        cout<<endl<<"ohh! worng input";
        cout<<endl<<"Pls Re-enter "<<endl;
        goto m;
    }
   
    y:
    cout<<"Year >";
    cin>>y;
    if(y<100)
    {
        cout<<endl<<"ohh! worng input";
        cout<<endl<<"Pls re-enter"<<endl;
        goto y;
    }

    //calculating <adding in one formate>
   
    s=d+(m*30)+(y*12*30);
    
    //Now taking today date
    //td stand for today day
    //tm stand for today month
    //ty stand for today year
    
    cout<<endl<<endl<<endl<<"Enter today date";
   td:
    cout<<endl<<"Day >";
    cin>>td;
   
    if(td>31||td<0)
    {
        cout<<endl<<"ohh! worng input";
        cout<<endl<<"Pls Re-entre"<<endl;
        goto td;
    }
   
    tm:
    cout<<"Month >";
    cin>>tm;
    if(tm<0||tm>12)
    {
        cout<<endl<<"ohh! worng input";
        cout<<endl<<"Pls Re-enter "<<endl;
        goto tm;
    }
   
    ty:
    cout<<"Year >";
    cin>>ty;
    if(ty<100)
    {
        cout<<endl<<"ohh! worng input";
        cout<<endl<<"Pls re-enter"<<endl;
        goto ty;
    }
    
    //calculating <adding in one formate
     //ts for today sum of date in day formate to calculate
    ts=td+(tm*30)+(ty*12*30);
    
    //compraing weather today date is wright or not
    if(ts<=s)
    {
        cout<<"Ohh! you have entered worng input"<<endl;
        goto start;
    }
    //substracting s from ts
    
    ns=ts-s;

    //distrubute in formate DDMMYYYY
    //nd stand for new day
    //nm stand for new month
    //ny stand for new year

    //calculation 
    nd=ns%30;
    nm=ns/30;
    ny=nm/12;
    nm=nm%12;


//Now we have to print 
cout<<"Your DOB is - "<<nd<<" DD  "<<nm<<" MM  "<<ny<<" YYYY"<<endl;
cout<<"Enter 1 for repeat > ";
cin>>r;
if(r==1)
goto start;
else
cout<<"See You later";
}
