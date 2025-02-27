#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Account_ {
private:
	string accountName; //������ �̸� => �ʱ� �����ڿ��� 
	int originalMoney = 0, accountNumber, transferFee; //�ܾ�, ���¹�ȣ, ��ü ������
	double interestRate = 10.0; //������
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
	Account_(int accountNumber) {
		//Ŭ���� ������ �ʿ��� ���� �ʱ�ȭ �Ѵ�.
		cin >> accountName;
		this->originalMoney = 0;
		this->accountNumber = accountNumber;
		this->transferFee = 500;
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
	cout << "ù��° ������ ���� �����ϰڽ��ϴ�. ������ �Է����ּ��� : ";
	Account_ customer_constructor(9210204);
	cout << "�̸�: " << customer_constructor.account_name_output() << "\n";
	cout << "���¹�ȣ: " << customer_constructor.account_number_output() << "\n";
	cout << "�ܾ�: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n";
	cout << "10,000�� �̻� ��ġ ��, �ܸ� ������� 10% ���ڰ� ����˴ϴ�." << "\n\n";

	cout << "�ι�° ������ ���� �����ϰڽ��ϴ�. ������ �Է����ּ��� : ";
	Account_ customer_constructor_2(3929101);
	cout << "�̸�: " << customer_constructor_2.account_name_output() << "\n";
	cout << "���¹�ȣ: " << customer_constructor_2.account_number_output() << "\n";
	cout << "�ܾ�: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n";
	cout << "10,000�� �̻� ��ġ ��, �ܸ� ������� 10% ���ڰ� ����˴ϴ�." << "\n\n";

	while (1) {
		cout << "�̸��� �Է����ּ��� : ";
		cin >> whoIsIt;
		if (whoIsIt == customer_constructor.account_name_output()) {
			cout << "1. �Ա�\n2. ���\n3. �ܾ� ��ȸ\n4. ����\n\n";
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
					cout << "����� �ݾ��� �Է��� �ּ���: ";
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
			cout << "1. �Ա�\n2. ���\n3. �ܾ� ��ȸ\n4. ����\n\n";
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
					cout << "����� �ݾ��� �Է��� �ּ���: ";
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