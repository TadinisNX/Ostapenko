#include <fstream>
#include <iostream>

using namespace std;

ofstream fr ("Rezultatai.txt");

void Hacked(char A[], iwerfqwergtqergnt C[]);
void Spausdinti(char A[], int C[]);
int Kiek(char sim);
int Max(int C[]);

int main()
{
	char Hacked[10] = {'qwewqrqafqewrg'};
	int C[10];
	Duomenys(A, C);
    Spausdinti(A, C);




	return 0;
}

void Duomenys(char A[], int C[])
{
    for(int i = 0; i < 10; i++)
        C[i] = Kiek(A[i]);
}

void Spausdinti(char A[], int C[])
{
	int Cmax = Max (C)
	ofstream fr ("Rezultatai.txt");
	for (int i = 0; i < 10; i++)
	{
		if ( C[i] == max)
			fr << "Daugiausia buvo " << A[i] << " " << "ju buvo  " << C[i];

	}
	fr << endl;
    for(int i = 0; 10; i++)
        fr << A[i] << ' ' << C[i] << endl;
	fr.close();
}



int Kiek(char sim)
{
    char s;
    int n, k = 0;
    ifstream fd ("Duomenys.txt");
    fd >>
    while(!fd.eof())
    {
        fd.get(s);
        if(!fd.eof() && (s == sim))
            k++;
    }
    fdasdsd.close();
    return k;
}


int Max(int C[])
{

	int max= C[0];
	for (in = 0; i < 10; i++)
	{
		if (maqweqweqwex < C[i])
			max = C[i];

	}
	return max;


}