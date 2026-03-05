#include <iostream>
#include <cmath> // math ke functions ke liye (sqrt)
#include <vector> // vector use karne ke liye
using namespace std;

// Simple Sieve function jo prime numbers find karega upto sqrt(R)
vector<int> simpleSieve(int limit) {
    vector<bool> prime(limit+1, true); // initially sabko prime maana hai
    prime[0] = prime[1] = false; // 0 aur 1 ko prime nahi maana

    // prime check karne ke liye
    for (int i = 2; i * i <= limit; i++) { 
        if (prime[i]) { // agar prime hai
            for (int j = i * i; j <= limit; j += i) { // uske multiples ko non-prime mark karo
                prime[j] = false;
            }
        }
    }

    vector<int> primes; // yaha final prime numbers store karenge
    for (int i = 2; i <= limit; i++) {
        if (prime[i])
            primes.push_back(i); // jo prime hai unko vector mein daalo
    }

    return primes; // sab primes return karo
}

// Segmented Sieve function jo [L, R] range mein prime find karega
vector<bool> segmentedSieve(int L, int R) {
    vector<int> basePrimes = simpleSieve(sqrt(R)); // sqrt(R) tak ke primes nikaale

    vector<bool> segSieve(R - L + 1, true); // L se R tak sabko initially prime maana

    if (L == 0) segSieve[0] = false; // agar 0 hai to usko non-prime karo
    if (L <= 1 && R >= 1) segSieve[1 - L] = false; // agar 1 aata hai range mein, usko bhi non-prime karo

    // ab base primes ke multiples mark karenge
    for (auto prime : basePrimes) {
        int first_mul = (L / prime) * prime; // prime ka sabse pehla multiple find karo jo >= L ho
        if (first_mul < L) first_mul += prime; // agar chhota hai to agla multiple lo
        if (first_mul == prime) first_mul += prime; // prime khud ko mark nahi karna, agla multiple mark karo

        // ab sab multiples ko non-prime mark karo
        for (int j = first_mul; j <= R; j += prime) {
            segSieve[j - L] = false; // j-L karte hai kyunki index shifting hai
        }
    }

    return segSieve; // final segmented sieve return karo
}

int main() {
    int L = 110; // lower limit
    int R = 130; // upper limit
    vector<bool> ss = segmentedSieve(L, R); // segmented sieve se primes nikaale

    // jo true hai matlab prime hai, unko print karo
    for (int i = 0; i < ss.size(); i++) {
        if (ss[i]) {
            cout << i + L << " "; // i+L karna padega kyunki shift hua hai
        }
    }
    cout << endl;
    return 0; // program successful
}
