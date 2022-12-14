#include<iostream>
using namespace std;
// Reverse a string using recursion

void reverse(string& str, int i, int j)
{
// base case
    if(i >j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

//Recusive call

    reverse(str, i, j);
}

int main ()
{

    string name = "Mayank";
    cout << endl;
    reverse(name, 0, name.length() -1);
    cout << endl;
    cout << name << endl;

    return 0;
}

// Palindrome using recursion


bool checkPalindrome(string str, int i, int j)
{
//base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;

    // recursion calling
    else
    {
        return checkPalindrome(str, i+1, j-1);
    }

}

int main ()
{

    string name = "aabbaa";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if(isPalindrome)
    {
        cout << "Its a Palindrome" << endl;
    }

    else
    {
        cout << "Its not an Palindrome " << endl;
    }

    return 0 ;
}

// Power using Recursion

int power(int a, int b)
{
//base case
    if(b == 0)
        return 1;

    if(b == 1)
        return a;

    //Recursive call
    int ans = power(a, b/2);

    // if b is even
    if(b%2 == 0)
    {
        return ans  * ans;
    }

    else
    {
        // if b is odd
        return a* ans * ans;
    }
}

int main ()
{

    int a, b;
    cin >> a >> b;

    int ans  = power(a,b);
    cout << "Answer is " << ans << endl;
    cout << endl;

    return 0;
}
*/
