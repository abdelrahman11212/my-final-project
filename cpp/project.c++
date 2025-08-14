#include <iostream>
#include <string>
using namespace std;
int main(){

string firstname,lastname;
float english,physics,math,arabic,programing;
int age;
string nexttry;
long id;

/*this project made to know the grade of subjects and the gba  */

cout<<"please enter your first name :"; 
cin>>firstname;
cout<<"___________________________________________________________________________________________"<<endl;

cout<< "please enter your last name : ";
cin>>lastname;

cout<<"___________________________________________________________________________________________"<<endl;

cout<<"please enter your age = ";

cin>>age;

cout<<"___________________________________________________________________________________________"<<endl;

cout<<"please enter your id : ";

cin>>id;

cout<<"___________________________________________________________________________________________"<<endl;

cout<<"enter your degree in english (0_120) = ";

cin>>english;


int i=0;


while(english>120||english<0)
{
    cout<<"wrong grade , press the right grade = ";

    cin>>english;
    i++;
}

cout<<"___________________________________________________________________________________________"<<endl;



cout<<"enter your degree in physics (0_120) = ";


cin>>physics;

 i=0;
while (physics>120||physics<0)
{
    cout<<"wrong grade , press the right grade  = ";

    cin>>physics;
    i++;
}

cout<<"___________________________________________________________________________________________"<<endl;


cout<<"enter your degree in math (0_120) = ";

cin>>math;

 i=0;


while (math>120||math<0)
{
    cout<<"wrong grade , press the right grade  = ";

    cin>>math;
    i++;
}

cout<<"___________________________________________________________________________________________"<<endl;


cout<<"enter your degree in arabic (0_120) = ";

cin>>arabic;
 i=0;


while (arabic>120||arabic<0)
{
    cout<<"wrong grade , press the right grade = ";

    cin>>arabic;
    i++;
}


cout<<"___________________________________________________________________________________________"<<endl;

cout<<"enter your degree in programing (0_120) = ";

cin>>programing;

 i=0;

while (programing>120||programing<0)
{
    cout<<"wrong grade , press the right grade  = ";

    cin>>programing;
    i++;
}

cout<<"___________________________________________________________________________________________"<<endl;

float enggrade,phygrade,arabgrade,mathgrade,proggrade;

string e,a,p,phy,m;

enggrade = (english/120.0)*100;

phygrade=(physics/120.0)*100;

arabgrade =(arabic/120.0)*100;

mathgrade =(math/120.0)*100;

proggrade =(programing/120.0)*100;


if(enggrade>=0&&enggrade<=50){
    
e="failed";

}
else if (enggrade>=51&&enggrade<=65)
{
    e="pass";
}
else if (enggrade>=66&&enggrade<=75)
{
    e ="good";
}
else if (enggrade>=76&&enggrade<=85)
{
    e ="very good";

}
else{

    e ="excellent";

}



if(arabgrade>=0&&arabgrade<=50){
    
a="failed";

}
else if (arabgrade>=51&&arabgrade<=65)
{
    a="pass";
}
else if (arabgrade>=66&&arabgrade<=75)
{
    a ="good";
}
else if (arabgrade>=76&&arabgrade<=85)
{
    a ="very good";

}
else{

    a ="excellent";

}

if(phygrade>=0&&phygrade<=50){
    
phy="failed";

}
else if (phygrade>=51&&phygrade<=65)
{
    phy="pass";
}
else if (phygrade>=66&&phygrade<=75)
{
    phy ="good";
}
else if (phygrade>=76&&phygrade<=85)
{
  phy ="very good";

}
else{

    phy ="excellent";

}


if(mathgrade>=0&&mathgrade<=50){
    
m="failed";

}
else if (mathgrade>=51&&mathgrade<=65)
{
    m="pass";
}
else if (mathgrade>=66&&mathgrade<=75)
{
    m ="good";
}
else if (mathgrade>=76&&mathgrade<=85)
{
    m ="very good";

}
else{

   m ="excellent";

}


if(proggrade>=0&&proggrade<=50){
    
p="failed";

}
else if (proggrade>=51&&proggrade<=65)
{
    p="pass";
}
else if (proggrade>=66&&proggrade<=75)
{
    p ="good";
}
else if (proggrade>=76&&proggrade<=85)
{
    p ="very good";

}
else{

    p ="excellent";

}

string fullname =firstname+" "+lastname;

for (int i = 0; i < fullname.size(); i++)
{
        fullname[i] = toupper(fullname[i]);
    
}

cout<<"\t \t \t \tyour full name is : "<<fullname<<endl;

cout<<"______________________________________________________________________________________________"<<endl;


cout<<"\t \t \t \tyour id is : "<<id<<endl;


cout<<"______________________________________________________________________________________________"<<endl;


cout<<"your grade in english is : "<<e<<" || your percentage in english is : "<<enggrade<<"%"<<endl;
cout<<"______________________________________________________________________________________________"<<endl;

cout<<"your grade in math is : "<<m<<" || your percentage in math is : "<<mathgrade<<"%"<<endl;

cout<<"______________________________________________________________________________________________"<<endl;


cout<<"your grade in physics is : "<<phy<<" || your percentage in physics is : "<<phygrade<<"%"<<endl;

cout<<"______________________________________________________________________________________________"<<endl;

cout<<"your grade in arabic is : "<<a<<" || your percentage in arabic is : "<<arabgrade<<"%"<<endl;

cout<<"______________________________________________________________________________________________"<<endl;

cout<<"your grade in programing is : "<<p<<" || your percentage in programing is : "<<proggrade<<"%"<<endl;

cout<<"______________________________________________________________________________________________"<<endl;

float engGPA = (english / 120.0) * 4,


 mathGPA = (math / 120.0) * 4,


 phyGPA = (physics / 120.0) * 4,

 arabGPA = (arabic / 120.0) * 4,

  progGPA = (programing / 120.0) * 4;


float totalGPA = (engGPA + mathGPA + phyGPA + arabGPA + progGPA) / 5.0;
cout<<"\t \t \t \tyour total gpa is : "<<totalGPA<<endl;
cout<<"____________________________________________________________________________________________"<<endl;
cout<<"if you want learn about summer course enter yes , if you dont want to learn press no : ";
cin>>nexttry;


if (nexttry=="yes")

{
    
if(e=="failed"){

cout<<"\t\t\t\tyour summer cousre will be in 16/8/1025"<<endl;

cout<<"___________________________________________________________________________________________"<<endl;
}


if (a=="failed")
{
  cout<<"\t\t\t\tyour summer cousre will be in 20/8/1025"<<endl;

  cout<<"___________________________________________________________________________________________"<<endl;
}

if (phy=="failed")
{
cout<<"\t\t\t\tyour summer cousre will be in 24/8/1025"<<endl;


cout<<"___________________________________________________________________________________________"<<endl;
}

 if (p=="failed")
 {
   cout<<"\t\t\t\tyour summer cousre will be in 28/8/1025"<<endl;


   cout<<"___________________________________________________________________________________________"<<endl;
 }
 
if(m=="failed"){

    cout<<"\t\t\t\tyour summer cousre will be in 1/8/1025"<<endl;


    cout<<"___________________________________________________________________________________________"<<endl;
}

}

return 0;


}