#include <iostream>
#include <cmath>
#include <string.h>
#include <fstream>

int lab_2()
{	
	float x, a = 2.1;
    std::cin>> x;
	std::cout<< 0.5*x*pow((1.0+a*x),0.2);
	return 0;
} 

void lab_3()
{	
	float a = 3.0 , x = 0.5;

	while(x	<= 2.5)
	{
		std::cout<<"S: "<<fabs(pow(sin(pow(x,5)),a))-pow(x,3)<<" x: "<< x <<std::endl;
		x=x+0.5;
	}
	
}

void lab_4_v17()
{
	float a=-2.0, b=5.0, c=0.7, x=2.0;
	while(x<=5.0)
	{
		if(x<3) 	std::cout<<"(x<3) x: "<<x<<"\tW: "<<pow(4,a*c)*sin(a+c)+pow(exp(1),a*x)<<std::endl;
		if(x>=3) 	std::cout<<"(x>=3) x: "<<x<<"\tW: "<<cos(a+b*x)-pow(x,2*c)<<std::endl;
		x=x+0.5;
	}
	
}

void lab_5()
{	
	float t=0.1, i=-0.5;
	int n=1;
	
	while(t<=3.0)
	{ 	
		printf("таблица %d\t параметр= %f\n ",n,t);
		for(float a=i;a<=4.5;a=a+1.5) 
		std::cout<<"X="<<t <<"\t "<< a<<"\t Y="<<
		a*t*t*log(t)+pow(a,t)+pow(exp(1),a*t)*cos(t)<<std::endl;
		t=t+0.3;
		n=n+1;
	}
}

void lab_6()
{
	float pvp[24];
	int con;
	float sum_,x;
	for(int i = 0; i < 24 ; i=i+1)
	{	
		std::cout<<"x=";
		std::cin>>x;
		pvp[i]=cos(2.0*i*x)/((2.0*i-1)*(2.0*i+1));
		if(pvp[i]<1 && i%2!=0)con=con+1;
		if(i%2==0)sum_=sum_+pvp[i];
	} 
	std::cout<<"yi<1.2 & n%2!=0 -->N="<<con<<" sum n%2==0  N="<<sum_;
}


void lab_7()
{	
	char c[]="asdoo ooo oo asdooo ooasa oooosdd.";
	int con = 0,f=0,g=0;
    
    for(int i=0;i<strlen(c);i=i+1)
    {   
        if(c[i]=='o') con=con + 1;
        if(c[i]==' '||c[i]=='.')
		{
            if(con!=0) f=f + 1;
            con=0;
        }
    }
    int N[f];
    for(int i;i<strlen(c);i=i + 1)
    {
        if(c[i]=='o') con=con + 1;
        if(c[i]==' '||c[i]=='.') {N[g]=con;con=0;g=g+1;}
    }
    for(int i;i<f;i=i + 1) std::cout<<N[i]<<" количество o в "<<i + 1<<" слове"<<std::endl;
    return 0;
}

void lab_8()
{	
	char a;
	int e = 3;
	//чтения 
	std::fstream F;
	F.open("s.txt");

	//запись
	std::ofstream f;
	f.open("u.txt", std::ios::out);

	while (!F.eof())
	{	
		F>>a;
		if(islower(a)) a = 'a'+(a-'a'+e)%26;
		if(isupper(a)) a = 'A'+(a-'A'+e)%26;
		
		f<<a;
	}

	F.close();
	f.close();
	system("pause");
}



int main()
{	
	

}


