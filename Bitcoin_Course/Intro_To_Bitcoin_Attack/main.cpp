#include <iostream>
#include <iomanip>
#include <cmath>
#include <cerrno>
#include <cstring>
#include <cfenv>

double AttackerSuccessProbability(double q, int z)
{
    double p = 1.0 - q;
    double lambda = z * (q / p);
    double sum = 1.0;
    int i, k;
    for (k = 0; k <= z; k++)
    {
        double poisson = std::exp(-lambda);
        for (i = 1; i <= k; i++)
             poisson *= lambda / i;
        sum -= poisson * (1 - pow(q / p, z - k));
    }
    return sum;
}

int main(){
    double q{0.3};
    int z;
    int e{10};

    for (z = 0; z <=e; z++)
    {
        double result = AttackerSuccessProbability(q,z);
        std::cout << "Attacker Success Prob : " << result << std::setprecision(16) << std::endl;
    }

    return 0;
}