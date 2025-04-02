#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

vector<int> createVector(int n)
{
    vector<int> nums(n);
    random_device rd;
    mt19937 gen(rd());                          // Mersenne Twister PRNG
    uniform_int_distribution<int> dist(1, 100); // Range: [1, 100]

    for (int &num : nums)
    {
        num = dist(gen);
    }
    return nums;
}

void printVector(vector<int> nums)
{
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &nums)
{
    for (int curr = 1; curr < nums.size(); curr++)
    {
        int key = nums[curr];
        int prev = curr - 1;
        while (prev >= 0 && nums[prev] > key)
        {
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = key;
    }
    cout << "InsertionSort: " << endl;
    printVector(nums);
}

void selectionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
    cout << "SelectionSort: " << endl;
    printVector(nums);
}

void bucketSort(vector<int> &nums, int numOfBuckets)
{
    vector<vector<int>> buckets(numOfBuckets);

    // Find the maximum value to determine bucket range
    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());
    int bucketRange = max(1, (maxVal - minVal) / numOfBuckets);

    // Insert elements into their respective buckets
    for (int num : nums)
    {
        int bucketIndex = min(num / bucketRange, 0);
        buckets[bucketIndex].push_back(num);
    }

    // Sort individual buckets and merge back
    int index = 0;
    for (vector<int> bucket : buckets)
    {
        sort(bucket.begin(), bucket.end());
        for (int num : bucket)
        {
            nums[index++] = num;
        }
    }
    cout << "BucketSort: " << endl;
    printVector(nums);
}

void merge(){

}

void mergeSort(){

}

int main()
{
    vector<int> nums = createVector(20);
    printVector(nums);
    insertionSort(nums);
    selectionSort(nums);
    bucketSort(nums, 10);

    return 0;
}
