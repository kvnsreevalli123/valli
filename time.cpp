#include<iostream>
using namespace std;
class second
{
	private:
	int h,m,s;
	public:
	second()
	{
		h=0;
		m=0;
		s=0;
	}
	second( int ho, int min, int sec)
	{
		h=ho;
		m=min;
		s=sec;
	}
	void convert_s_to_m()
	{
		while(s>=60)
		{
		s-=60;
		m++;	
		}
	}
		void convert_m_to_h()
		{
			while(m>=60)
			{
				m-=60;
				h++;
			}
		}
		void show()
		{
			cout<<h<<":"<<m<<":"<<s<<endl;
		}
		void convert_to_sec()
		{
			m=m+(h*60);
			s=s+(m*60);
			cout<<"total in seconds\t"<<s<<endl;
		}
	};
	int main()
	{
		second s(6,90,98);
		s.convert_s_to_m();
		s.convert_m_to_h();
		s.show();
		s.convert_to_sec();
		return 0;
		
	}
