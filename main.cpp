//#include<stdio.h>

//int main(){
//    int ErmekGrade;
//    scanf("%d", &ErmekGrade);
//    printf("%d \n", ErmekGrade);
//    if (ErmekGrade>= 90){
//        printf("A \n");
//    }
//   else if (ErmekGrade>=70 ){
//        printf("B \n");
//
//    }
//    else if (ErmekGrade >=50 &&ErmekGrade<=69){
//        printf("C \n");
//
//    }
//    else{
//        printf("F \n");
//    }
//}

//#include<stdio.h>
//int main() {
//     char Name[20];
//    scanf("\n %s", &Name);
////    printf("\n %s", Name);
//    int Age;
//    scanf("%d", &Age);
////    printf("%d \n", Age);
//    if (Age >= 18 && Age <= 25) {
//        printf("Welcome %s", Name);
//    } else {
//        printf("Not welcome %s", Name);
//    }
//
//}
//#include<stdio.h>
//#include<math.h>
//#include <stdlib.h>
//int main()
//{
//    float num, root;
//    printf("Enter a number: ");
//    scanf("%f", &num);
//    root = abs(num);
//    printf("Square root of %.2f = %.2f", num, root);
//    return 0;
//
//}
//#include <stdio.h>
//int addNumbers(int a, int b);
//int main()
//{
//    int n1, n2, sum;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &n1, &n2);
//    sum = addNumbers(n1, n2);
//    printf("Sum = %d", sum);
//    return 0;
//}
//int addNumbers(int a, int b)
//{
//    int result;
//    result = a+b;
//    return result;
//}
//HW6(1)
//
//#include <stdio.h>
//
//int main()
//{
//    int i,arr[10],sum=0;
//
//    printf("Enter 10 elements:");
//    for(i=0;i<10;++i)
//        scanf("%d",&arr[i]);
//
//    for(i=0;i<10;++i)
//        sum=sum+arr[i];
//    printf("Sum of numbers is:%d",sum);
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int A[10][10],B[10][10],C[10][10],i,j,row1,col1;
//    printf("\n Enter row and column: ");
//    scanf("%d %d",&row1,&col1);
//    printf("\n Enter A matrix");
//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<col1;j++)
//        {
//            scanf("%d",&A[i][j]);
//        }
//    }
//    printf("\n Enter B matrix");
//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<col1;j++)
//        {
//            scanf("%d",&B[i][j]);
//        }
//    }
//    printf("\n Sum of the two matrices: \n ");
//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<col1;j++)
//        {
//            C[i][j]=A[i][j]+B[i][j];
//            printf("%d \t",C[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//
//void Array_sort(int *array , int n)
//{
//
//    int i=0 , j=0 , temp=0;
//
//    for(i=0 ; i<n ; i++)
//    {
//        for(j=0 ; j<n-1 ; j++)
//        {
//            if(array[j]>array[j+1])
//            {
//                temp        = array[j];
//                array[j]    = array[j+1];
//                array[j+1]  = temp;
//            }
//        }
//    }
//
//    printf("\nThe array after sorting is..\n");
//    for(i=0 ; i<n ; i++)
//    {
//        printf("\narray_1[%d] : %d",i,array[i]);
//    }
//}
//
//
//float Find_median(int array[] , int n)
//{
//    float median=0;
//
//
//    if(n%2 == 0)
//        median = (array[(n-1)/2] + array[n/2])/2.0;
//
//    else
//        median = array[n/2];
//
//    return median;
//}
//
//int main()
//{
//
//    int array_1[30] = {0};
//
//    int i=0 ,n=0;
//    float median=0;
//
//    printf("\nEnter the number of elements for the array : ");
//    scanf("%d",&n);
//
//    printf("\nEnter the elements for array_1..\n");
//    for(i=0 ; i<n ; i++)
//    {
//        printf("array_1[%d] : ",i);
//        scanf("%d",&array_1[i]);
//    }
//
//
//    Array_sort(array_1 , n);
//
//#include <stdio.h>
//
//int main()
//{
//    int arr[10];
//    int sum,product,i;
//
//    /*Read array elements*/
//    printf("\nEnter elements : \n");
//    for(i=0; i<10; i++)
//    {
//        printf("Enter arr[%d] : ",i);
//        scanf("%d",&arr[i]);
//    }
//
//    /*calculate sum and product*/
//    sum=0;
//    product=1;
//    for(i=0; i<10; i++)
//    {
//        sum=sum+arr[i];
//        product=product*arr[i];
//    }
//
//    printf("\nSum of array is     : %d"  ,sum);
//    printf("\nProduct of array is : %d\n",product);
//
//    return 0;
//}
//    median = Find_median(array_1 , n);
//
//    printf("\n\nThe median is : %f\n",median);
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int number, i;
//    float num[100], sum = 0.0, avg;
//
//    printf("Enter the numbers of elements: ");
//    scanf("%d", &number);
//
//    while (number > 100 || number < 1) {
//        printf("Error! number should in range of (1 to 100).\n");
//        printf("Enter the number again: ");
//        scanf("%d", &number);
//    }
//
//    for (i = 0; i < number; ++i) {
//        printf("%d. Enter number: ", i + 1);
//        scanf("%f", &num[i]);
//        sum += num[i];
//    }

//    avg = sum / number;
//    printf("Average = %.2f", avg);
//    return 0;
//}

/*Program to calculate Sum, Product of all elements.*/

//#include <stdio.h>
//
//int main()
//{
//    int arr[10];
//    int sum1,product,i;
//
//    /*Read array elements*/
//    printf("\nEnter elements : \n");
//    for(i=0; i<10; i++)
//    {
//        printf("Enter arr[%d] : ",i);
//        scanf("%d",&arr[i]);
//    }
//
//    /*calculate sum and product*/
//    sum1=0;
//    product=1;
//    for(i=0; i<10; i++)
//    {
//        sum1=sum1+arr[i];
//        product=product*arr[i];
//    }
//
//    printf("\nSum of array is     : %d"  ,sum1);
//    printf("\nProduct of array is : %d\n",product);
//
//    return 0;
//}


//#include <stdio.h>


//#include <stdio.h>
//int main() {
//    int number, i;
//    float num[100], sum = 0.0, avg;
//
//    printf("Enter the numbers of elements: ");
//    scanf("%d", &number);
//
//    while (number > 100 || number < 1) {
//        printf("Error! number should in range of (1 to 100).\n");
//        printf("Enter the number again: ");
//        scanf("%d", &number);
//    }
//
//    for (i = 0; i < number; ++i) {
//        printf("%d. Enter number: ", i + 1);
//        scanf("%f", &num[i]);
//        sum += num[i];
//    }
//
//    avg = sum / number;
//    printf("Average = %.2f", avg);
//    return 0;
//}
//
//
//#include<stdio.h>
//int main(){
//    int n = 20000;
//    int num;
////    scanf("%d", num);
//    for (int i = 1; i<num; i++) {
//        if (i*i >=n){
//            break;
//        }
//        printf("Square %d\n", i*i);
//
//    }
//}

//    int square_of_numbers;
//        int num;
//        scanf("%d", num);
//        printf("%d \n", square_of_numbers);
//    for (int i = 10; i<20 ) in range
//    if (square_of_numbers>= 100){
//        printf("A \n");
//    }
//   else if (ErmekGrade>=70 ){
//        printf("B \n");


//#include <stdio.h>
//#include <stdbool.h>
//bool isEven (int n) {
//    if (n %2 ==0){
//        return True;
//    }
//    else {
//        return False;
//    }
//}
//int main() {
//
//
//    if (isEven(7)) {
//        printf("It is Even");
//    } else {
//        printf("Not Even");
//    }
//}

//#include <bits/stdc++.h>
//
//using namespace std
//int n, x, y;
//
//int f(int t){
//    return (t-x)/ 0) / x+ max(t-x, 0) / y+1
//
//int main () m{
//    cin >> n>> x>> y;
//    if (x>y)
//        swap (x, y);
//
//    int l = 0 , r =2e9;
//    while (r-l>1) {
//        int mid = (l+r)/2;
//        if (f(mid)> =n ){
//            r = mid;
//            }else{
//            l =mid
//        }
//    }
//}


//
//#include <bits/stdc++.h>
//#include <stdio.h>
//using namespace std;
//const int N = 1e5+5;
//int n , r, c, h[N];
//int calc(int x){
//    int cnt =0;
//    for (int i = 1; i <= n-c +1; i++){
//        if(h[i+c-1])
//    }
//}
//int main(){
//    cin >> h[i]
//    int main()
//
//}
//
//while (a(i+l-1)-a(i)<=m)<
//    c++
//    i=i+l
//else:
//i++
//if (cut > = group)
//    return


//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 5;
//
//int n, d, c, h[N];
//
//int calc(int x) {
//    int cnt = 0;
//    for (int i = 1; i <= n - c + 1; i++) {
//        if (h[i + c - 1] - h[i] <= x) {
//            cnt++;
//            i = i + c - 1;
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    cin >> n >> d >> c;
//    for (int i = 1; i <= n; i++) {
//        cin >> h[i];
//    }
//    sort(h + 1, h + n + 1);
//
//    int l = -1, r = 1e9;
//    while (r - l > 1) {
//        int mid = (l + r) / 2;
//        if (calc(mid) >= d) {
//            r = mid;
//        } else {
//            l = mid;
//        }
//    }
//    cout << r << endl;
//}


//bool check(int x) {
//    int cows = 1;
//    int last_cow = coords[0];
//    for (int c : coords) {
//        if (c - last_cow >= x) {
//            cows++;
//            loast_cow = c;
//        }
//    }
//    return cows >= k;
//}
//
//int solve() {
//    sort(coords.begin(), coords.end());
//    int left = 0;
//    int right = coords.back() - coords[0] + 1;
//    while (right - left > 1) {
//        int mid = (left + right) / 2;
//        if (check(mid)) {
//            left = mid;
//        } else {
//            right = mid;
//        }
////    }
////    return left;
////}
//
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5+5;
//int n, k;
//int a[N];
//
//int get(int x) {
//    int ret = 1, last = a[1];
//    for (int i = 2; i <= n; i++) {
//        if (a[i]- last >=x){
//            ret = ret +1;
//            last = a[i];
//        }
//    }
//    return ret;
//}
//int main() {
//    cin >> n >> k;
//
//    for (int i = 1; i <=n; i++){
//        cin >> a [i];
//    }
//
//    int l =1, r= a[n];
//
//    while(l<=r) {
//        int md = (l+r)/2;
//        if (get(md)>=k)
//            l=md +1;
//        else
//            r=md -1;
//    }
//    cout << r << endl;
//
//}

