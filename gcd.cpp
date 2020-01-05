#include <bits/stdc++.h>

	int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
	/* code */
	
	std::cout<<gcd(30,15)<<std::endl;

	return 0;
}