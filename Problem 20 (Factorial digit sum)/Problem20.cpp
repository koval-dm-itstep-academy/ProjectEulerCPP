// Часть кода для нахождения больших факториалов взял тут https://www.geeksforgeeks.org/factorial-large-number/

#include<iostream>
using namespace std;
 
// Максимальное количество цифр на выходе
#define MAX 500
 
int multiply(int x, int res[], int res_size);
 
int solve(int n) //Решение задачи
{
    int sum = 0;
    int res[MAX];
 
    // Инициализация результата
    res[0] = 1;
    int res_size = 1;
 
    // Применение простой факториальной формулы    
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    for (int i = res_size - 1; i >= 0; i--)
        sum += res[i];
    
    return sum;
}
 
// Эта функция умножает x на число, представленное res []. res_size - это размер res [] или количество цифр в числе, представленном res []. 
// Эта функция использует простую школьную математику для умножения. 
// Эта функция может иметь значение res_size и возвращает новое значение res_size.
int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
 
        res[i] = prod % 10; 
 
        carry  = prod/10;   
    }
 
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
 

int main()
{
    cout << solve(100) << "\n";
    return 0;
}