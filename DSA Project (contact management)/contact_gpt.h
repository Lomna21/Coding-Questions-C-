#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class Contact {
    string firstName, lastName, phoneNumber;

public:
    Contact(string fName, string lName, string phNo) {
        firstName = fName;
        lastName = lName;
        phoneNumber = phNo;
    }

    void getDetails() const {
        cout << firstName << " " << lastName << " " << phoneNumber << endl;
    }
};

class ContactManagement {
    struct nodeName {
        bool last;
        int id;
        nodeName* child[36];

        nodeName() {
            id = -1;
            last = false;
            for (int i = 0; i < 36; i++) {
                child[i] = NULL;
            }
        }
    };

    vector<int> idMatched;
    vector<Contact> listOfContacts;
    nodeName *root, *root2, *rootPhNo;

    int getCharIndex(char ch) {
        if (isalpha(ch)) {
            return tolower(ch) - 'a';
        } else if (isdigit(ch)) {
            return ch - '0' + 26;
        }
        return -1;
    }

public:
    ContactManagement() {
        listOfContacts.clear();
        idMatched.clear();
        root = new nodeName();
        root2 = new nodeName();
        rootPhNo = new nodeName();
    }

    void addContact() {
        string fName, lName, phoneNo;
        ifstream myfile("sam.csv");
        while (getline(myfile, fName, ',') && getline(myfile, lName, ',') && getline(myfile, phoneNo, '\n')) {
            Contact newContact(fName, lName, phoneNo);
            if (phoneNo[0] == '+') phoneNo = phoneNo.substr(1);

            listOfContacts.push_back(newContact);
            int curSizeOfContacts = (int) listOfContacts.size();

            transform(fName.begin(), fName.end(), fName.begin(), ::tolower);
            transform(lName.begin(), lName.end(), lName.begin(), ::tolower);

            nodeName* temp = root;
            for (char ch : fName) {
                int idx = getCharIndex(ch);
                if (temp->child[idx] == NULL) {
                    temp->child[idx] = new nodeName();
                }
                temp = temp->child[idx];
            }
            temp->last = true;
            temp->id = curSizeOfContacts - 1;

            temp = root2;
            for (char ch : lName) {
                int idx = getCharIndex(ch);
                if (temp->child[idx] == NULL) {
                    temp->child[idx] = new nodeName();
                }
                temp = temp->child[idx];
            }
            temp->last = true;
            temp->id = curSizeOfContacts - 1;

            temp = rootPhNo;
            for (char ch : phoneNo) {
                int idx = getCharIndex(ch);
                if (temp->child[idx] == NULL) {
                    temp->child[idx] = new nodeName();
                }
                temp = temp->child[idx];
            }
            temp->last = true;
            temp->id = curSizeOfContacts - 1;

            cout << fName << " " << lName << " " << phoneNo << endl;
        }
    }

    vector<int> completeSearch(nodeName* rt, string& keyToMatch, char type) {
        nodeName* temp = rt;
        bool flag = false;
        for (char ch : keyToMatch) {
            int idx = getCharIndex(ch);
            if (temp->child[idx] == NULL) break;
            temp = temp->child[idx];
            if (ch == keyToMatch.back() && temp->id >= 0) flag = true;
        }
        if (flag) idMatched.push_back(temp->id);
        return idMatched;
    }

    void prefixSearchBFS(nodeName* root, string key, char type) {
        if (root == NULL) return;
        nodeName* temp = root;
        for (char ch : key) {
            int idx = getCharIndex(ch);
            if (temp->child[idx] == NULL) return;
            temp = temp->child[idx];
        }
        queue<nodeName*> q;
        q.push(temp);
        while (!q.empty()) {
            temp = q.front();
            q.pop();
            if (temp->last) idMatched.push_back(temp->id);
            for (int i = 0; i < 36; i++) {
                if (temp->child[i] != NULL) {
                    q.push(temp->child[i]);
                }
            }
        }
    }

    void display(const vector<int>& objectIds) {
        if (objectIds.empty()) {
            cout << "Total Matched Found: " << 0 << endl;
            return;
        }
        cout << "Total Matched Found: " << (int)objectIds.size() << endl;
        for (auto id : objectIds) {
            listOfContacts[id].getDetails();
        }
    }

    void showCompleteSearchResult(int type, string keyToMatch) {
        vector<int> ids;
        idMatched.clear();
        if (type == 1)
            ids = completeSearch(root, keyToMatch, 'a');
        else if (type == 2)
            ids = completeSearch(root2, keyToMatch, 'a');
        else if (type == 3)
            ids = completeSearch(rootPhNo, keyToMatch, '0');
        display(ids);
    }

    void showPrefixSearchResult(int type, string keyToMatch) {
        idMatched.clear();
        if (type == 1)
            prefixSearchBFS(root, keyToMatch, 'a');
        else if (type == 2)
            prefixSearchBFS(root2, keyToMatch, 'a');
        else if (type == 3)
            prefixSearchBFS(rootPhNo, keyToMatch, '0');
        display(idMatched);
    }
};

int main() {
    ContactManagement cm;
    cm.addContact();

    string keyToMatch;

    cout << "Complete Search by First Name: ";
    cin >> keyToMatch;
    cm.showCompleteSearchResult(1, keyToMatch);

    cout << "Prefix Search by Last Name: ";
    cin >> keyToMatch;
    cm.showPrefixSearchResult(2, keyToMatch);

    cout << "Complete Search by Phone Number: ";
    cin >> keyToMatch;
    cm.showCompleteSearchResult(3, keyToMatch);

    return 0;
}
