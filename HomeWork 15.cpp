
#include <iostream>


int main()
 {
    //Task 1
    for (int y = 1; y < 10; y++)
    {
        std::cout << "| " << y;
        for (int x = 1; x < 10; x++)
        {
            if (x * y < 10)
            {
                std::cout << "| ";
            }
            else
            {
                std::cout << "|";
            }
            std::cout << x * y;
        }
        std::cout << "|\n";
    }



    //Task 2
    int user;
    std::cout << "\nIs the number a palindrome?\n";
    std::cin >> user;
    int count = 0, copyuser = user, plural = 1, but = 0, delitel = 1;


    while (user)
    {
        user /= 10;
        count++;
        plural *= 10;
    }
    plural /= 10;


    for (int i = 0; i < count; i++)
    {
        if (copyuser / delitel % 10 != copyuser / plural % 10)
        {
            std::cout << "It's not palindrome.\n \n";
            but = 1;
            break;
        }
        delitel *= 10;
        plural /= 10;
    }


    if (but != 1)
    {
        std::cout << "It's palindrome.\n \n";
    }



    //Task 3
    int A, B, C, ara = 1, bara = 1, cara = 0;
    std::cout << "Parallelepiped frame dimensions(length, width and height):";
    std::cin >> A >> B >> C;


    for (int y = 0; y <= A + C; y++)
    {
        for (int x = 0; x < A + B + C; x++)
        {
            if (x >= A && x <= A + B && y == 0)
            {
                std::cout << "_";
            }
            else if (y > ara - 1 && x == A - ara && ara <= A)
            {
                std::cout << "/";
                ara += 1;
            }
            else if (y > bara - 1 && x == A + B - bara + 1 && bara <= A)
            {
                std::cout << "/";
                bara += 1;
            }
            else if (y > 0 && x == A + B + 1 && y <= C)
            {
                std::cout << "|";
            }
            else if (y > C && x == A + B - cara && cara <= A - 1)
            {
                std::cout << "/";
                cara += 1;
            }
            else if (y >= A + 1 && x == B && y <= C + A)
            {
                std::cout << "|";
            }
            else if (y >= A + 1 && x == 0 && y <= C + A)
            {
                std::cout << "|";
            }
            else if (y == A + 1 && x < B)
            {
                std::cout << "_";
            }
            else if (y == C + A && x < B)
            {
                std::cout << "_";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }



    //Task 4
    std::cout << "\nPrime numbers:";
    for (int i = 2, count = 0; i < 100/*00000*/; i++)
    {
        for (int sanya = 2; sanya < 10; sanya++)
        {
            if (i != sanya)
            {
                if (i % sanya == 0)
                {
                    count = 1;
                    break;
                }
            }
        }
        if (count != 1)
        {
            std::cout << i << " ";
        }
        count = 0;
    }



    //Task 5
    std::cout << "\n \nArmstrong number:";
    int bebranosez = 0;
    for (int i = 0; i < 10000000; i++)
    {
        int copyi = i, plural = 1, sum = 1, count = 1;
        while (copyi)
        {
            copyi /= 10;
            count++;
            plural *= 10;
        }
        if (count >= 2)
        {
            plural /= 10;
        }


        for (int j = 0; j < count - 1; j++)
        {
            for (int y = 0; y < count - 1; y++)
            {
                int formula = i / plural % 10;
                sum *= formula;
            }
            bebranosez += sum;
            plural /= 10;
            sum = 1;
        }


        if (bebranosez == i && bebranosez != 0)
        {
            std::cout << i << " ";
        }
        bebranosez = 0;
    }


}