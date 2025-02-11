#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <execution> // For parallel algorithms in C++17 and later

void runNumericExamples() {
    std::vector<int> nums { 1, 2, 3, 4, 5 };
    std::vector<int> nums2 { 10, 20, 30, 40, 50 };
    std::vector<int> result(nums.size());
    
    // 1. std::accumulate
    // Adds up elements in nums.
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    std::cout << "Sum: " << sum << "\n";

    // Custom operation (product of all elements)
    int product = std::accumulate(nums.begin(), nums.end(), 1, std::multiplies<int>());
    std::cout << "Product: " << product << "\n";
    
    // 2. std::inner_product
    // Computes the dot product of nums and nums2.
    int innerProd = std::inner_product(nums.begin(), nums.end(), nums2.begin(), 0);
    std::cout << "Inner Product: " << innerProd << "\n";

    // 3. std::partial_sum
    // Computes the running totals.
    std::partial_sum(nums.begin(), nums.end(), result.begin());
    std::cout << "Partial Sum: ";
    for (int r : result) std::cout << r << " ";
    std::cout << "\n";

    // 4. std::adjacent_difference
    // Computes the difference between each adjacent pair.
    std::adjacent_difference(nums.begin(), nums.end(), result.begin());
    std::cout << "Adjacent Difference: ";
    for (int r : result) std::cout << r << " ";
    std::cout << "\n";

    // 5. std::reduce (requires C++17)
    // A parallel-friendly version of std::accumulate.
    int reducedSum = std::reduce(nums.begin(), nums.end(), 0);
    std::cout << "Reduced Sum: " << reducedSum << "\n";

    // 6. std::exclusive_scan (requires C++17)
    // Compute prefix sums (excludes the current element).
    std::exclusive_scan(nums.begin(), nums.end(), result.begin(), 0);
    std::cout << "Exclusive Scan: ";
    for (int r : result) std::cout << r << " ";
    std::cout << "\n";

    // 7. std::inclusive_scan (requires C++17)
    // Compute prefix sums (includes the current element).
    std::inclusive_scan(nums.begin(), nums.end(), result.begin());
    std::cout << "Inclusive Scan: ";
    for (int r : result) std::cout << r << " ";
    std::cout << "\n";

    // 8. std::transform_reduce (requires C++17)
    // Combines a transformation and a reduction into one step.
    int transformReduce = std::transform_reduce(nums.begin(), nums.end(), nums2.begin(), 0);
    std::cout << "Transform Reduce: " << transformReduce << "\n";

    // 9. std::transform_exclusive_scan (requires C++17)
    // Combine transformations with scans.
    std::transform_exclusive_scan(nums.begin(), nums.end(), result.begin(), 0, std::plus<int>(), [](int x) {
        return x * x;
    });
    std::cout << "Transform Exclusive Scan: ";
    for (int r : result) std::cout << r << " ";
    std::cout << "\n";

    // 10. std::transform_inclusive_scan (requires C++17)
    // Combine transformations with scans.
    std::transform_inclusive_scan(nums.begin(), nums.end(), result.begin(), std::plus<int>(), [](int x) {
        return x * x;
    });
    std::cout << "Transform Inclusive Scan: ";
    for (int r : result) std::cout << r << " ";
    std::cout << "\n";
}
