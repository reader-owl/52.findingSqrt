#include <iostream>

/*
                    Q. finding square root of a nmbr using binary search

                explanation - we have to return floor value of square root of an integer
                                    √25 = 5
                                    √30 = 5.__ = 5
                                    √35 = 5.__ = 5
                                    √36 = 6

                sol -  one way to solve this question is by using 'squareroot' function

                    but we are going to use binary search

            brute -  we will use linear search
                                    lets take n = 25

                    in this method firstly we take '1', then we do - 1 * 1 = 1, which is not 25
                    then we take '2', then we do - 2 * 2 = 4, which is not 25
                    then we take '3', then we do - 3 * 3 = 9, which is not 25
                    then we take '4', then we do - 4 * 4 = 16, which is not 25
                    then we take '5', then we do - 5 * 5 = 25, which is 25
                                so we will take '5

                            if we have n = 28
                    we take '1', then we do - 1 * 1 = 1, which is not 28
                    then we take '2', then we do - 2 * 2 = 4, which is not 28
                    then we take '3', then we do - 3 * 3 = 9, which is not 28
                    then we take '4', then we do - 4 * 4 = 16, which is not 28
                    then we take '5', then we do - 5 * 5 = 25, which is not 28
                    then we take '6', then we do - 6 * 6 = 36, which exceeded 28
                        there is no exact answer for this 'n', 
                                so we will take '5' as possible answer

        pseudo code
ans = 1
for(i = 1; i <= n; i++)
{
    if(i*i <= n)
    {
        ans = i;
    }
    else
        break;
}

            
            TC - O(N)


                Optimal -  we apply binary search
                            from 1 to n, bcz squareroot can't be greater than n

    pseudo code
f(n)
{
    low = 1, high = n;
    ans = 1
    while(low <= high)
    {
        mid = (low+high)/2;
        if((mid * mid) <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;                             // high will always be answer here, so we can return high or ans its our choice
}


        Actual code
int floorSqrt(int n)
{
    int low = 1, high = n;
    while(low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = (mid * mid);

        if(val <= n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
*/

int main()
{
    std::cout << "Hello World!\n";
}