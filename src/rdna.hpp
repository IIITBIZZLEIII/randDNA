#include <random>
#include <string>
using namespace std;

string randDNA(int numseed,string Lbase, int length)
{
	string DNAseq;
	
	mt19937 eng2(numseed);
	
	uniform_int_distribution<int> unifrm(0, Lbase.size()-1);
	
	for(int i = 0; i < length; i++)
		{
			int x = unifrm(eng2);
			
			DNAseq += Lbase[x];
		}
	return DNAseq;
}
		
