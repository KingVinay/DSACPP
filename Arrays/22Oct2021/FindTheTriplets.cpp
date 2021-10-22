//Function Template for Find The Triplets (No. of Triplets having given Product )


int countTriplets(int arr[], int n, int m)
{

    int count = 0;
 

    // Consider all triplets and count if

    // their product is equal to m

    for (int i = 0; i < n - 2; i++)

        for (int j = i + 1; j < n - 1; j++)

            for (int k = j + 1; k < n; k++)

                if (arr[i] * arr[j] * arr[k] == m)

                    count++;
 

    return count;
}