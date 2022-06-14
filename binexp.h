#include<math.h>

int max(int a,int b)    
{
    return a>b?a:b;
}
int min(int a,int b)    
{
    return a<b?a:b;
}

void swap(int&a, int&b){
    int t = b;
    b = a;
    a = t;
}

int gcd(int a, int b){
    while(b){
        a = a%b;
        swap(a,b);
    }
    return a;
}

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int bingcd(int a,int b){
    if(!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do
    {
        b >>= __builtin_ctz(b);
        if(a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a<<shift;
}

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

void shift_solution(int & x, int & y, int a, int b, int cnt) {
    x += cnt * b;
    y -= cnt * a;
}

int find_all_solutions(int a, int b, int c, int minx, int maxx, int miny, int maxy) {
    int x, y, g;
    if (!find_any_solution(a, b, c, x, y, g))
        return 0;
    a /= g;
    b /= g;

    int sign_a = a > 0 ? +1 : -1;
    int sign_b = b > 0 ? +1 : -1;

    shift_solution(x, y, a, b, (minx - x) / b);
    if (x < minx)
        shift_solution(x, y, a, b, sign_b);
    if (x > maxx)
        return 0;
    int lx1 = x;

    shift_solution(x, y, a, b, (maxx - x) / b);
    if (x > maxx)
        shift_solution(x, y, a, b, -sign_b);
    int rx1 = x;

    shift_solution(x, y, a, b, -(miny - y) / a);
    if (y < miny)
        shift_solution(x, y, a, b, -sign_a);
    if (y > maxy)
        return 0;
    int lx2 = x;

    shift_solution(x, y, a, b, -(maxy - y) / a);
    if (y > maxy)
        shift_solution(x, y, a, b, sign_a);
    int rx2 = x;

    if (lx2 > rx2)
        swap(lx2, rx2);
    int lx = max(lx1, lx2);
    int rx = min(rx1, rx2);

    if (lx > rx)
        return 0;
    return (rx - lx) / abs(b) + 1;
}


template<unsigned int N>
class SeiveOfEratosthenes{
public:
    int is_prime[N+1];
    SeiveOfEratosthenes(){
        for(int i=0;i<=N;i++)   is_prime[i] = true;
        is_prime[0] = is_prime[1] = false;
        for(int i=2;i<=N;i++){
            if(is_prime[i]&&(long long)i*i<=N){
                for(int j = i*i;j<=N;j+=i)
                    is_prime[j] = false;
            }
        }
    }
};

