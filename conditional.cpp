//Adding program
#include <iostream>
using namespace std;

// Procedure to input weight and height
void inputData(float &weight, float &height) {
    cout << "Masukkan berat badan (kg): ";
    cin >> weight;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> height;
}

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / (height * height);
} 

// Function to determine weight status
string getStatus(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}

int main() {
    float weight, height;
    
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    
    // Input data
    inputData(weight, height);
    
    // Calculate BMI
    float bmi = calculateBMI(weight, height);
    
    // Get status
    string status = getStatus(bmi);
    
    // Display results
    cout << "\n--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status : " << status << endl;
    
    return 0;
}