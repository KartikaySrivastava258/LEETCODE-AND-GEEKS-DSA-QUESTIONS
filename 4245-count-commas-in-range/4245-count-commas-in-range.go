func countCommas(n int) int {
    count := 0

    for i := 1; i <= n; i++ {
        if i >= 1000 {
            count++
        }
    }

    return count
}