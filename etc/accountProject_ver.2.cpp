#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Account_ {
private:
	string accountName; //������ �̸� => �ʱ� �����ڿ��� 
	int originalMoney, accountNumber, transferFee; //�ܾ�, ���¹�ȣ, ��ü ������
	double interestRate; //������
	int money_plus(int _money) {
		originalMoney += _money;
		return originalMoney;
	}
	int money_minus(int _money) {
		if (originalMoney - (_money + 500) < 0) {
			cout << "�ܾ��� �����մϴ�.\n";
			return 0;
		}
		originalMoney -= (_money + 500);
		cout << "��ü ������ 500���� �ΰ��Ǿ����ϴ�.\n";
		return originalMoney;
	}
public :
	/**������ �̸��� �־ ����*/
	Account_(string _accountName, int _accountNumber, int _originalMoney, int _transferFee, double _interestRate) {
		//Ŭ���� ������ �ʿ��� ���� �ʱ�ȭ �Ѵ�.
		this->accountName = _accountName;
		this->accountNumber = _accountNumber;
		this->originalMoney = _originalMoney;
		this->transferFee = _transferFee;
		this->interestRate = _interestRate;
	}
	string account_name_output(){ return accountName; }
	int account_number_output() { return accountNumber; }
	int originalMoney_plus_interestRate_output() {
		if (originalMoney >= 10000) { return originalMoney + originalMoney / interestRate; }
		return originalMoney;
	}
	int money_plus_output(int _money) { return money_plus(_money); }
	int money_minus_output(int _money) { return money_minus(_money); }
};
int main(void){
	int choice, money;
	string whoIsIt; //��� ����� �� �̸� Ȯ���ϴ� ����
	string accountName; 
	int originalMoney = 0, accountNumber, transferFee; //�ܾ�, ���¹�ȣ, ��ü ������
	double interestRate; //������
	cout << "ù��° ������ ���� �����ϰڽ��ϴ�. ������ �Է����ּ���.\n";
	cout << "�̸� : ", cin >> accountName;
	cout << "���¹�ȣ : ", cin >> accountNumber;
	cout << "�ܾ� : ", cin >> originalMoney;
	cout << "��ü ������ : ", cin >> transferFee;
	cout << "������ : ", cin >> interestRate;
	Account_ customer_constructor(accountName, accountNumber, originalMoney, transferFee, interestRate);
	cout << "10,000�� �̻� ��ġ ��, �ܸ� ������� ���ڰ� ����˴ϴ�." << "\n\n";

	cout << "�ι�° ������ ���� �����ϰڽ��ϴ�. ������ �Է����ּ���.\n";
	cout << "�̸� : ", cin >> accountName;
	cout << "���¹�ȣ : ", cin >> accountNumber;
	cout << "�ܾ� : ", cin >> originalMoney;
	cout << "��ü ������ : ", cin >> transferFee;
	cout << "������ : ", cin >> interestRate;
	Account_ customer_constructor_2(accountName, accountNumber, originalMoney, transferFee, interestRate);
	cout << "10,000�� �̻� ��ġ ��, �ܸ� ������� ���ڰ� ����˴ϴ�." << "\n\n";

	while (1) {
		cout << "��ȸ�Ͻ� ������ �Է����ּ��� : ";
		cin >> whoIsIt;
		if (whoIsIt == customer_constructor.account_name_output()) {
			cout << "1. �Ա�\n2. ��ü\n3. �ܾ� ��ȸ\n4. ����\n\n";
			cout << "���Ͻô� ��ȣ�� �Է��� �ּ���.\n\n";
			cin >> choice;
			if (choice == 1) {
				cout << "�Ա��� �ݾ��� �Է��� �ּ���: ";
				cin >> money;
				customer_constructor.money_plus_output(money);
				cout << "���� �ܾ�: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 2) {
				cout << "��ü�ص帱 ���� �̸��� �Է��� �ּ���: ";
				cin >> whoIsIt;
				if (whoIsIt == customer_constructor.account_name_output()) {
					cout << "���� �����Դϴ�. �ٽ� �Է����ּ���. \n";
				}
				else if (whoIsIt == customer_constructor_2.account_name_output()) {
					cout << "��ü�� �ݾ��� �Է��� �ּ���: ";
					cin >> money;
					customer_constructor.money_minus_output(money);
					customer_constructor_2.money_plus_output(money);
					cout << "���� �ܾ�: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n\n";
				}
				else cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n\n";
			}
			else if (choice == 3) {
				cout << "���� �ܾ�: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 4) {
				cout << "�̿����ּż� �����մϴ�.";
				return 0;
			}
			else cout << "��ȣ�� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n\n";
		}
		else if (whoIsIt == customer_constructor_2.account_name_output()) {
			cout << "1. �Ա�\n2. ��ü\n3. �ܾ� ��ȸ\n4. ����\n\n";
			cout << "���Ͻô� ��ȣ�� �Է��� �ּ���.\n\n";
			cin >> choice;
			if (choice == 1) {
				cout << "�Ա��� �ݾ��� �Է��� �ּ���: ";
				cin >> money;
				customer_constructor_2.money_plus_output(money);
				cout << "���� �ܾ�: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 2) {
				cout << "��ü�ص帱 ���� �̸��� �Է��� �ּ���: ";
				cin >> whoIsIt;
				if (whoIsIt == customer_constructor_2.account_name_output()) {
					cout << "���� �����Դϴ�. �ٽ� �Է����ּ���. \n";
				}
				else if (whoIsIt == customer_constructor.account_name_output()) {
					cout << "��ü�� �ݾ��� �Է��� �ּ���: ";
					cin >> money;
					customer_constructor_2.money_minus_output(money);
					customer_constructor.money_plus_output(money);
					cout << "���� �ܾ�: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n\n";
				}
				else cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n";
			}
			else if (choice == 3) {
				cout << "���� �ܾ�: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 4) {
				cout << "�̿����ּż� �����մϴ�.";
				return 0;
			}
			else cout << "��ȣ�� �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n\n";
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.\n";
		}
	}
}