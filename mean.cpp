#include <iostream>
#include <cmath>

using namespace std;

double t_statistic(double sample_mean, double hypothesized_mean, double std_dev, int n) {
    return (sample_mean - hypothesized_mean) / (std_dev / sqrt(n));
}

int main() {
    double hypothesized_mean, sample_mean, std_dev, significance_level;
    int n;

    // Input data
    cout << "Masukkan mean hipotesis: ";
    cin >> hypothesized_mean;
    cout << "Masukkan mean sampel: ";
    cin >> sample_mean;
    cout << "Masukkan standar deviasi sampel: ";
    cin >> std_dev;
    cout << "Masukkan ukuran sampel: ";
    cin >> n;
    cout << "Masukkan tingkat signifikansi (misalnya 0.05 untuk 5%): ";
    cin >> significance_level;

    // Calculate t-statistic
    double t_stat = t_statistic(sample_mean, hypothesized_mean, std_dev, n);

    // Output result
    cout << "t-Statistic: " << t_stat << endl;
    cout << "Periksa tabel distribusi t untuk menemukan p-value dan bandingkan dengan tingkat signifikansi." << endl;

    return 0;
}
