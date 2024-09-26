#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>

using namespace std;

class Person {
protected:
    string name;
    string address;
    string phoneNumber;
public:
    //constructor 
    Person(const string& name, const string& address, const string& phoneNumber){
            this -> name = name;    
            this -> address = address; 
            this -> phoneNumber = phoneNumber; 
        }

    const string& getName() const { return name; }
    const string& getAddress() const { return address; }
    const string& getPhoneNumber() const { return phoneNumber; }
};

class Member : public Person {
private:
    int age;
    int weight;
    int height;
    string registrationDate;
    string membershipEndDate;

public:

    //constructor 
    Member(const string& name, const string& address, const string& phoneNumber,int age, int weight, int height)
        : Person(name, address, phoneNumber), age(age), weight(weight), height(height) {
        registrationDate = getCurrentDateTime();
    }
  /*
    void setMembershipEndDate(int durationMonths) {
        auto now = chrono::system_clock::now();
        auto membershipDuration = chrono::months(durationMonths);
        auto endDate = now + membershipDuration;
        time_t endDateTime = chrono::system_clock::to_time_t(endDate);
        membershipEndDate = formatDate(endDateTime);
  */
    

    void displayInfo() const {
        cout << "Nama           : " << name << endl;
        cout << "Umur           : " << age << endl;
        cout << "Berat Badan    : " << weight << endl;
        cout << "Tinggi Badan   : " << height << endl;
        cout << "Alamat         : " << address << endl;
        cout << "Nomor Telepon  : " << phoneNumber << endl;
        cout << "Tanggal Daftar : " << registrationDate << endl;
        cout << "Masa Aktif     : " << membershipEndDate << endl;
    }

private:
    string getCurrentDateTime() const {
        auto now = chrono::system_clock::now();
        time_t nowDateTime = chrono::system_clock::to_time_t(now);
        return formatDate(nowDateTime);
    }

    string formatDate(time_t dateTime) const {
        string formattedDateTime(30, '\0');
        strftime(&formattedDateTime[0], formattedDateTime.size(), "%d-%m-%Y %H:%M:%S", localtime(&dateTime));
        return formattedDateTime;
    }
};

class Visitor : public Person {
private:
    string visitDate;
    bool paymentStatus;

public:
    Visitor(const string& name, const string& address, const string& phoneNumber)
        : Person(name, address, phoneNumber), paymentStatus(false) {
        visitDate = getCurrentDateTime();
    }

    void setPaymentStatus(bool status) {
        paymentStatus = status;
    }

    void displayInfo() const {
        cout << "Nama           : " << name << endl;
        cout << "Alamat         : " << address << endl;
        cout << "Nomor Telepon  : " << phoneNumber << endl;
        cout << "Tanggal Kunjung: " << visitDate << endl;
        cout << "Status Pembayaran: " << (paymentStatus ? "Sudah dibayar" : "Belum dibayar") << endl;
    }

private:
    string getCurrentDateTime() const {
        auto now = chrono::system_clock::now();
        time_t nowDateTime = chrono::system_clock::to_time_t(now);
        return formatDate(nowDateTime);
    }

    string formatDate(time_t dateTime) const {
        string formattedDateTime(30, '\0');
        strftime(&formattedDateTime[0], formattedDateTime.size(), "%d-%m-%Y %H:%M:%S", localtime(&dateTime));
        return formattedDateTime;
    }
};

int main() {
    vector<Member> members;
    vector<Visitor> visitors;

    while (true) {
        cout << "Selamat Datang di Aplikasi Manajemen Kasir Gym!" << endl;
        cout << "Pilih menu:" << endl;
        cout << "1. Daftar Member Baru" << endl;
        cout << "2. Daftar Kunjungan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan Anda: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, address, phoneNumber;
                int age, weight, height;
                cout << "Masukkan nama: ";
                cin.ignore();
                getline(cin, name);
                cout << "Masukkan alamat: ";
                getline(cin, address);
                cout << "Masukkan nomor telepon: ";
                getline(cin, phoneNumber);
                cout << "Masukkan umur: ";
                cin >> age;
                cout << "Masukkan berat badan: ";
                cin >> weight;
                cout << "Masukkan tinggi badan: ";
                cin >> height;

                Member newMember(name, address, phoneNumber, age, weight, height);
                //newMember.setMembershipEndDate(3); // Contoh durasi 3 bulan
                members.push_back(newMember);

                cout << "Member berhasil didaftarkan!" << endl;
                break;
            }
            case 2: {
                string name, address, phoneNumber;
                cout << "Masukkan nama pengunjung: ";
                cin.ignore();
                getline(cin, name);
                cout << "Masukkan alamat pengunjung: ";
                getline(cin, address);
                cout << "Masukkan nomor telepon pengunjung: ";
                getline(cin, phoneNumber);

                Visitor newVisitor(name, address, phoneNumber);
                visitors.push_back(newVisitor);

                cout << "Data kunjungan berhasil direkam!" << endl;
                break;
            }
            case 3:
                cout << "Terima kasih! Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}
