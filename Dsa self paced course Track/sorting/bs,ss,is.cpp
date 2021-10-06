// void bubbleSort(arr, n)
// {
//     for (int j = 0; j < n - 1; j++)
//     {
//         bool swapped = false;
//         for (int i = 0; i < n - 1 - j; i++)
//             if (arr[i + 1] < arr[i])
//             {
//                 swap(arr[i], arr[i + 1]);
//                 swapped = true;
//             }
//         if (swapped == false)
//             break;
//     }
// } //it is the max optimised bubble sort , it is stable(don't change same value elements) , BigO(n^2) , in-place(dont require extra memory for sorting)

// void selectSort(arr, n)
// {
//     int min_ind;
//     for (int i = 0; i < n - 1; i++)
//     {
//         min_ind = i;
//         for (int j = i + 1; j < n; j++)
//             if (arr[j] < arr[min_ind])
//                 min_ind = j;
//         swap(arr[i], arr[min_ind]);
//     }
// } //it is max optimised selection sort , it is not stable , THETA(n^2), in-place

// void insertSort(arr, n)
// {
//     for (int i = 1; i < n; i++)
//         for (int j = i - 1; j >= 0; j--)
//             if (arr[j + 1] < arr[j])
//                 swap(arr[j + 1], arr[j]);
//             else
//                 break;
// } // it is max optimised insertion sort, it is stable, BigO(n^2) and Omega(n), in-place, most popular and efficient sorting for small size arrays,and it is always preffered for small size arrays,best case when input array is already sorted and worst case when array is reverse sorted