#include <iostream>

int main ()
{
    
    // Part one: obtaining a limit
    std::cout << "Enter an integer: ";
    int n{};
    std::cin >> n;

    // Part two: creating a matrix starting at 2 and ending at n
    int arr[n - 1];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int st( 2 );
    
    for (int i{ 0 }; i < arrSize; i++)
    {
        arr[i] = st;
        st = st + 1;
    }

    // Part three: use of the Sieve of Eratosthenes
    for (int i{ 0 }; i < arrSize; i++)
    {
        if (arr[i] != 0)
        {
            std::cout << arr[i] << ' ';
            int num{ arr[i] };
            int sqr{ num ^ 2 };
            
            for (int j{ 0 }; j < arrSize; j++)
            {
                if (num != arr[j] and arr[j] % num == 0 and sqr <= arr[j])
                {
                    arr[j] = 0;
                }
            }
        
        }
    }

    std::cout << '\n';

    return 0;
}
