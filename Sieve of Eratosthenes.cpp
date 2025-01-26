#define LIMIT 100000000

bool is_not_prime[LIMIT];

int main() {
  for(int i = 2; i < LIMIT; i ++)
    if(is_not_prime[i] == 0)
      for(int i2 = 2*i; i2 < LIMIT; i2 += i)
            is_not_prime[i2] = 1;
  return 0;
}
