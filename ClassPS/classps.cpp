#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

class PhanSo
{
public:
	int TS;
	int MS;
public:
	PhanSo()
	{
		int TS = 0;
		int MS = 1;
	}
	PhanSo(int Tu, int Ma)
	{
		TS = Tu;
		if (Ma != 0)
		{
			MS = Ma;
		}
		else 
			MS = 1;
		
	}

	void Print()
	{
		if (MS != 1 )
		{
			cout << "Ket qua : " << TS << " / " << MS << endl;
		}
		else
		{
			cout << TS << endl;
		}
		
	}

	PhanSo Cong(PhanSo x)
	{
		PhanSo ps;
		ps.TS = x.TS*MS + x.MS*TS;
		ps.MS = x.MS*MS;
		return ps;
	}

	PhanSo Tru(PhanSo x)
	{
		PhanSo ps;
		ps.TS = x.MS*TS - x.TS*MS;
		ps.MS = x.MS*MS;
		return ps;
	}

	PhanSo Nhan(PhanSo x)
	{
		PhanSo ps;
		ps.TS = x.TS*TS;
		ps.MS = x.MS*MS;
		return ps;
	}

	PhanSo Chia(PhanSo x)
	{
		PhanSo ps;
		ps.TS = TS*x.MS;
		ps.MS = MS*x.TS;
		return ps;
	}

	PhanSo ToiGian()
	{
		int a = TS, b = MS;
		while (a != b)
		{
			if (a > b) {a -=b;}
			else if (b > a) {b -= a;}
		}
		PhanSo ps;
		ps.TS = TS / a;
		ps.MS = MS / a;
		return ps;
	}
};

void main()
{
	PhanSo PS1(5,10),PS2(15,10),PSR;
	PSR = PS1.Cong(PS2);
	PSR = PSR.ToiGian();
	PSR.Print();

	system("pause");
}