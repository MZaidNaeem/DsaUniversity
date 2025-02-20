#include <iostream>
using namespace std;

void findFrequency();
void firstAndSecondMinimum();
void separateOddEven();
void squareMartixMultiplication();
void transpose();
void push();
void pop();
void peek();
void stackPrinter();

int stack[3];
int top = -1;

int main()
{

    bool exit = false;
    int num;
    while (!exit)
    {
        cout << "Enter 0 to exit: " << endl;
        cout << "Enter 1 to find Frequency: " << endl;
        cout << "Enter 2 to find First and second minimum: " << endl;
        cout << "Enter 3 to separate odd and even: " << endl;
        cout << "Enter 4 to mulitply two square matrix: " << endl;
        cout << "Enter 5 to take transpose of matrix: " << endl;
        cout << "Enter 6 to push element in stack: " << endl;
        cout << "Enter 7 to pop element from stack: " << endl;
        cout << "Enter 8 to peek: " << endl;
        cout << "Enter 9 to print the element in stack: " << endl;
        cout << "Enter the nmbr: ";
        cin >> num;

        switch (num)
        {
        case 0:
            cout << "Terminating.. ";
            return 0;
        case 1:
            cout << endl;
            findFrequency();
            break;
        case 2:
            cout << endl;
            firstAndSecondMinimum();
            break;
        case 3:
            cout << endl;
            separateOddEven();
            break;
        case 4:
            cout << endl;
            squareMartixMultiplication();
            break;
        case 5:
            cout << endl;
            transpose();
            break;
        case 6:
            cout << endl;
            push();
            break;
        case 7:
            cout << endl;
            pop();
            break;
        case 8:
            cout << endl;
            peek();
            break;
        case 9:
            cout << endl;
            stackPrinter();
            break;
        default:
            cout << "Enter valid number" << endl;
            break;
        }
    }
    return 0;
}

void findFrequency()
{

    int usernmbr;
    int count = 0;
    int size;

    cout << "How many numbers you want to enter: ";
    cin >> size;

    int nmbrs[size];

    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " number: ";
        cin >> nmbrs[i];
    }

    cout << "Enter number to find its frequency: ";
    cin >> usernmbr;

    for (int i = 0; i < size; i++)
    {
        if (nmbrs[i] == usernmbr)
        {
            count++;
        }
    }

    cout << "The frequency of the given number " << usernmbr << " is: " << count << endl;

    cout << endl;
    cout << endl;
}

void firstAndSecondMinimum()
{
    int usernmbr;
    int size;

    cout << "How many numbers you want to enter: ";
    cin >> size;

    int nmbrs[size];

    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " number: ";
        cin >> nmbrs[i];
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        if (nmbrs[i] < min1)
        {
            min2 = min1;
            min1 = nmbrs[i];
        }
        else if (nmbrs[i] < min2)
        {
            min2 = nmbrs[i];
        }
    }

    cout << "The first minimum value is: " << min1 << endl;
    cout << "The second minimum value is: " << min2 << endl;
    cout << endl;
    cout << endl;
}

void separateOddEven()
{

    int size;
    int evenIndex = 0;
    int oddIndex = 0;

    cout << "How many numbers you want to enter: ";
    cin >> size;

    int nmbrs[size];
    int odd[size];
    int even[size];

    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " number: ";
        cin >> nmbrs[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (nmbrs[i] % 2 == 0)
        {
            even[evenIndex++] = nmbrs[i];
        }
        else
        {
            odd[oddIndex++] = nmbrs[i];
        }
    }

    // printing even the odd

    cout << "Even numbers are : " << endl;
    for (int i = 0; i < evenIndex; i++)
    {
        cout << even[i] << endl;
    }

    cout << endl;

    cout << "odd numbers are : " << endl;
    for (int i = 0; i < oddIndex; i++)
    {
        cout << odd[i] << endl;
    }
    cout << endl;
    cout << endl;
}

void transpose()
{

    int size;

    cout << "Enter the size of the martix: ";
    cin >> size;

    int nmbrs[size][size];

    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            cout << "Enter the Elements of the " << i + 1 << " row and " << y + 1 << " column: ";
            cin >> nmbrs[i][y];
        }
    }

    // taking transpose
    int transpose[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            transpose[i][y] = nmbrs[y][i];
        }
    }

    cout << "Transpose of the given matrix is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            cout << transpose[i][y] << " ";
        }
        cout << endl;
    }
}

void squareMartixMultiplication()
{
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    int matrix1[size][size];
    int matrix2[size][size];
    int productMatrix[size][size];

    // Input the first matrix
    cout << "Enter the numbers for the first matrix: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            cout << "Enter the element for row " << i + 1 << ", column " << y + 1 << ": ";
            cin >> matrix1[i][y];
        }
    }

    // Input the second matrix
    cout << "Enter the numbers for the second matrix: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            cout << "Enter the element for row " << i + 1 << ", column " << y + 1 << ": ";
            cin >> matrix2[i][y];
        }
    }

    // Initialize the productMatrix to 0
    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            productMatrix[i][y] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the first matrix
    cout << "Given matrix 1: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Print the second matrix
    cout << "Given matrix 2: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Print the product matrix
    cout << "Product of the given two matrices: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << productMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void push()
{
    int number;

    if (top < 3 - 1)
    {
        cout << "Enter number to push" << endl;

        cin >> number;
        stack[++top] = number;
        cout << "number push successfullyu" << top << endl;
        ;
    }
    else
    {
        cout << "stack overflow" << endl;
    }
}
void pop()
{

    if (top == -1)
    {
        cout << "Stack under flow " << endl;
    }
    else
    {
        --top;
    }
}

void peek()
{
    if (top != -1)
    {
        cout << "The element returned is: " << stack[top] << endl;
    }
    else
    {
        cout << "No Elmement ot return " << endl;
    }
}

void stackPrinter()
{
    if (top == -1)
    {
        cout << "No Element in stack" << endl;
        return;
    }
    else
    {
        cout << "Printing element of stack: " << endl;

        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}