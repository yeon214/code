#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class account {
private:
	string accountName; //������ �̸�
	int originalMoney = 0, accountNumber = 9210204, transferFee = 500, money; //�ܾ�, ���¹�ȣ, ��ü ������
	double interestRate = 10.0; //������
	int moneyPlus() {
		cin >> money;
		originalMoney += money;
		return originalMoney;
	}
	int moneyMinus() {
		cin >> money;
		originalMoney -= (money + 500);
		return originalMoney;
	}
public :
	account() {
		cin >> accountName;
	}
	string accountNameOutput(){ return accountName; }
	int accountNumberOutput() { return accountNumber; }
	int originalMoney_Plus_InterestRate_Output() {
		if (originalMoney >= 10000) { return originalMoney + originalMoney / interestRate; }
		else return originalMoney;
	}
	int moneyPlusOutput() { return moneyPlus(); }
	int moneyMinusOutput() { return moneyMinus(); }
};
int main(void){
	cout << "������ ������ �Է��� �ּ���: ";
	account customer;
	int choice, theOtherPersonAccount;
	cout << "�̸�: " << customer.accountNameOutput() << endl;
	cout << "���¹�ȣ: " << customer.accountNumberOutput() << endl;
	cout << "�ܾ�: " << customer.originalMoney_Plus_InterestRate_Output() << endl;
	cout << "10,000�� �̻� ��ġ ��, �ܸ� ������� 10% ���ڰ� ����˴ϴ�." << endl;
	cout << "���� �̿� �ٶ��ϴ�. �����մϴ�.\n\n";
	while (1) {
		cout << "1. �Ա�\n2. ���\n3. �ܾ� ��ȸ\n4. ����\n\n";
		cout << "���Ͻô� ��ȣ�� �Է��� �ּ���.\n\n";
		cin >> choice;
		if (choice == 1) {
			cout << "�Ա��� �ݾ��� �Է��� �ּ���: ";
			customer.moneyPlusOutput();
			cout << "���� �ܾ�: " << customer.originalMoney_Plus_InterestRate_Output() << endl << endl;
		}
		else if (choice == 2) {
			cout << "��ü�� ���¹�ȣ�� �Է��� �ּ���: ";
			cin >> theOtherPersonAccount;
			cout << "����� �ݾ��� �Է��� �ּ���: ";
			customer.moneyMinusOutput();
			cout << "��ü ������ 500���� �ΰ��Ǿ����ϴ�.\n";
			cout << "���� �ܾ�: " << customer.originalMoney_Plus_InterestRate_Output() << endl << endl;
		}
		else if (choice == 3) {
			cout << "���� �ܾ�: " << customer.originalMoney_Plus_InterestRate_Output() << endl << endl;
		}
		else if (choice == 4) {
			cout << "�̿����ּż� �����մϴ�.";
			return 0;
		}
		else cout << "��ȣ�� �� �� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n\n";
	}
}