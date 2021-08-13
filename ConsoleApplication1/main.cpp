#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
//void arrayMass(long int mas[], int smallest, int d, int lenght)
//{
//    for (int i = 0; i < lenght; i++)
//    {
//        mas[i] =(0 + rand() % d)-smallest;
//        cout << mas[i] << " ";
//    }
//}

//int main()
//{
//    int count = 0;
//   long int a[2013];
//    arrayMass(a, 500, 1000, 2013);
//    for (int i = 0; i< 1006;i++)
//    {
//        if ((a[i] + a[2013 - i]) > 20) 
//        { 
//            count++;
//            cout << a[i] << "--perviq s pari;-"<<i<<"; " << a[2013 - i] << "vtoroi;-" <<(2013-i)<< "  " << endl;
//        }
//    }
//
//     
//    return 0;
//} 

//struct FIO
//{
//    string familiaN;
//    int count = 1;
//    string name2;
//};
//
//
//int main()
//{
//    
//    FIO fio[3];
//    for (int i = 0; i < 3; i++)
//    {
//        getline(cin, fio[i].familiaN);
//    }
//    
//    for (int i = 1; i < 3; i++) 
//    {
//           fio[i].name2=fio[i].familiaN.substr(0,fio[i].familiaN.find(" "));
//         //  cout << fio[i].name2 <<"_____________"<< endl;
//    }
//    for (int i = 1; i < 3; i++) 
//    {
//        for (int j=1; j < 3; j++)
//        {
//            if (i != j && fio[i].name2 == fio[j].name2)
//            {
//                cout << fio[i].name2 <<"--"<< fio[j].name2;
//                fio[i].count++;
//                fio[j].count++;
//                if (fio[j].count != 1)
//                {
//                    cout << fio[j].name2<<";--"<< fio[j].count <<endl;
//                   // cout << fio[j].name2 << "-2-" << endl;
//                }
//            }
//            else if (j != i)
//            {
//                cout << fio[j].name2 << endl;
//            }
//        }
//        
//    }
//}
//string a[3];
//int main()
//{
//	for (int i = 0; i < 3; i++) {
//		getline(cin, a[i]);
//		a[i] = a[i].substr(0, a[i].find(" "));
//	}
//	int counter = 0;
//	for (int i = 0; i < 3; i++) {
//		counter = 1;
//		
//		for (int j = 0; j < i; j++) {
//			if (a[i] == a[j]) {
//				counter++;
//			}
//		}
//		if (counter > 1) { cout << a[i] << counter << endl; }
//		else { cout << a[i]<< endl; }
//	}
//}
//struct fgfg
//{
//	string info;
//	string smth;
//	int counter;
//};
//int main()
//{
//fgfg info1[100];
//int n;
//cin >> n;
//for (int i = 0; i < n; i++) {
//	getline(cin, info1[i].info);
//	info1[i].smth = info1[i].info.length() - 2;
//	cout << info1[i].smth << endl;
//}
//for (int i = 0; i < n; i++) {
//	info1[i].counter = 1;
//	for (int j = 0; j < i; j++) {
//		if (info1[i].smth == info1[j].smth) {
//			info1[i].counter++;
//		}
//	}
//}
//
//}

/*struct base
{
	string sname;
	string name;
	int bals1;
	int bals2;
	int bals3;
	int balsAll;
	char firstltr;
};
int main()
{
	//setlocale(LC_ALL, "Russian");
	base ppls[100];
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> ppls[i].sname;
		cout << ' ';
		cin >> ppls[i].name;
		cout << ' ';
		cin >> ppls[i].bals1 >> ppls[i].bals2 >> ppls[i].bals3;
		ppls[i].balsAll = ppls[i].bals1 + ppls[i].bals2 + ppls[i].bals3;
	}
	for (int i = 0; i < a; i++) {
		//cout << ppls[i].sname << "--"<<ppls[i].name<<"--"<< ppls[i].bals1 << "---" << ppls[i].bals2 << "---" << ppls[i].bals3 << "---" << ppls[i].balsAll << endl;
		if (ppls[i].balsAll > 140 && ppls[i].bals1 > 30 && ppls[i].bals2 > 30 && ppls[i].bals3 > 30) {
			for (int i = 0; i < a; i++) {
				for (int j = 0; j < a - 1 - i; j++) {
					ppls[j].firstltr = ppls[j].sname[1];
					ppls[j+1].firstltr = ppls[j+1].sname[1];
					if(ppls[j].firstltr>ppls[j+1].firstltr)
					{
						swap(ppls[j], ppls[j + 1]);
					}
				}
			}
			cout << ppls[i].sname << ' ' << ppls[i].name << "-проходит" << endl;
			
	}
	}
}
*/

/*
struct train
{
	string sname;
	string name;
	int depoin;
	int depoout;
};
struct depoin_out
{
	int number;
	int in;
	int out;
};
int main() {
	setlocale(LC_ALL, "Russian");
	depoin_out depo[10];
	int N;
	cout << "введите число станций(<=10)";
	cin >> N;
	int a;
	cout << "введите число пассажиров: ";
	cin >> a;
	train prsn[100];
	for (int i = 0; i < a; i++) {
		cin >> prsn[i].sname >> prsn[i].name >> prsn[i].depoin >> prsn[i].depoout;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < a; j++) {
			if (prsn[j].depoin == N) {
				depo[N].in++;
				depo[N].number = N;
			}
		}
		cout << depo[N].in;
	}

}
*/
/*
struct name {
	string fname;
	string name;
	string sname;
	string lname;
};
int main() {
	name ss[100];
	int x;
	cin >> x;
	x += 1;
	for (int i = 0; i < x; i++) {
		getline(cin, ss[i].fname);
	};
	for (int i = 0; i < x + 1; i++) 
	{
		ss[i].name = ss[i].fname.substr(0, ss[i].fname.find(' '));
		cout << ss[i].name << endl;
		ss[i].fname = ss[i].fname.erase(0, (ss[i].fname.find(' ')) + 1);
		ss[i].sname = ss[i].fname.substr(0, ss[i].fname.find(' '));
		cout << ss[i].sname << endl;
		ss[i].fname = ss[i].fname.erase(0, (ss[i].fname.find(' ')) + 1);
		ss[i].lname = ss[i].fname.substr(0);
		cout << ss[i].lname << endl;
	};
}
*/


/* struct test
{
public:
	string fname;
	int age;

	 void chng_name(int i)
	{
	    ss[i].name = ss[i].fname.substr(0, ss[i].fname.find(' '));
		cout << ss[i].name << endl;
		ss[i].fname = ss[i].fname.erase(0, (ss[i].fname.find(' ')) + 1);
		ss[i].sname = ss[i].fname.substr(0, ss[i].fname.find(' '));
		ss[i].initials = ss[i].sname[1];
		cout << ss[i].initials << endl;
		ss[i].fname = ss[i].fname.erase(0, (ss[i].fname.find(' ')) + 1);
		ss[i].lname = ss[i].fname.substr(0);
		ss[i].initiall = ss[i].lname[1];
		cout << ss[i].initiall << endl;
	}
private:
	string name;
	string sname;
	string lname;
	char initials;
	char initiall;

} ss[5];

int main()
{setlocale(LC_ALL, "Russian");
	int x;
	cin >> x;
	x += 1;
	for (int i = 0; i < x; i++) {
		getline(cin, ss[i].fname);
		cout << "--";
		cin >> ss[i].age;
		cout << "след" << endl;

	};
	for (int i = 0; i < x + 1; i++) {
		//chng_name(i);
		cout << endl << ss[i].age;

	}



}
*/

struct stdnt
{
	string inisials;
	string number;
	double rightNum=0;
	void inisial(string data)
	{
			inisials = data.substr(0, data.find(" "));
			data.erase(0, data.find(" ") + 1);
			inisials += data.substr(0, data.find(" "));


			cout << inisials << endl;
	}
};

int main() {
  
	cout << 123 << endl;
	string data;
	stdnt olimpiada[99];
	int N;
	cin>>N;
	cout << "N is" << N << endl;
	string saver;
	olimpiada->inisial(data);

	for (int i = 0; i < N+1; i++) {
		getline(cin,data);
		olimpiada->inisial(data);
		cout << olimpiada[i].inisials <<"inisials"<< endl;
		//olimpiada[i].inisials = data.substr(0, data.find(" "));
	    //data = data.erase(0, data.find(" ")+1);
		//olimpiada[i].inisials += data.substr(0, data.find(" "));
		olimpiada[i].number = (data.erase(0, data.find(" ")+1));
		saver = (olimpiada[i].number.substr(0, olimpiada[i].number.find(" ")));
		olimpiada[i].number = (olimpiada[i].number.erase(0, olimpiada[i].number.find(" ")));
		olimpiada[i].rightNum += atof(saver.c_str());

		olimpiada[i].number = olimpiada[i].number.erase(0, olimpiada[i].number.find(" ") + 1);
		saver = (olimpiada[i].number.substr(0, olimpiada[i].number.find(" ")));
		olimpiada[i].number = (olimpiada[i].number.erase(0, olimpiada[i].number.find(" ")));
		olimpiada[i].rightNum += atof(saver.c_str());

		olimpiada[i].number = olimpiada[i].number.erase(0, olimpiada[i].number.find(" ") + 1);
		saver = (olimpiada[i].number.substr(0, olimpiada[i].number.find(" ")));
		olimpiada[i].rightNum += atof(saver.c_str());
		cout << olimpiada[i].rightNum << endl << endl;
	}
	int min = 100;
	int isaver=1 ;
	int jsaver=2;
	int gsaver = 3;
	double ijsumm = olimpiada[1].rightNum + olimpiada[2].rightNum;
	
	for (int i = 1; i < N; i++) {
		for (int j = 2; j < N; j++) {
			
			if (olimpiada[i].rightNum + olimpiada[j].rightNum > ijsumm && i != j) {
				isaver = i; jsaver = j;
				ijsumm = olimpiada[i].rightNum + olimpiada[j].rightNum;
			}
		}	
	}
	//cout << olimpiada[jsaver].rightNum << "jsaver" << endl;
	double NN = 1;
	for (int i = 1; i < N; i++) {
		for (int j = 2; j < N; j++) {
			for (int g = 3; g < N+1; g++) {
				if (g != isaver && g != jsaver && olimpiada[g].rightNum > NN ) {
					gsaver = g;
					NN = olimpiada[gsaver].rightNum;
				}
			}
		}
	}
	//cout << olimpiada[gsaver].rightNum << "gsaver" << endl;
	//cout << "isaver and jsaver-" << isaver << endl << olimpiada[isaver].rightNum << endl << jsaver << endl << olimpiada[jsaver].rightNum << endl;

	for (int i = 0; i < N; i++) {
		if ((olimpiada[i].rightNum == olimpiada[isaver].rightNum || olimpiada[i].rightNum == olimpiada[jsaver].rightNum)&& i!=isaver&&i!=jsaver&&i!=gsaver) {
			cout << olimpiada[i].inisials << endl << olimpiada[i].rightNum << endl;
		}
	}

	cout << olimpiada[isaver].inisials << "  " << olimpiada[isaver].rightNum << endl << olimpiada[jsaver].inisials << "  "
		<< olimpiada[jsaver].rightNum << endl << olimpiada[gsaver].inisials << "  " << olimpiada[gsaver].rightNum << endl;
	return 0;
}

