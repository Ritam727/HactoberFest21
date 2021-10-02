#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define tests int t; cin >> t; while(t--)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define pf push_front
using namespace std;

template <typename T>
struct Node {
	T val;
	Node<T> *next;
	Node<T> *prev;
};

template <typename T>
struct LinkedList {
	Node<T> *head = NULL, *tail = NULL;
	int size = 0;

	void push_back(T v) {
		size++;
		Node<T> *node = new Node<T>();
		if(node == NULL) {
			cout << "No memory!!\n";
		}
		node->val = v; node->next = NULL;
		if(tail == NULL) {
			node->prev = NULL;
			head = node; tail = node;
			return;
		}
		node->prev = tail; tail->next = node; tail = node;
	}
	
	void push_front(T v) {
		size++;
		Node<T> *node = new Node<T>();
		if(node == NULL) {
			cout << "No memory!!\n";
		}
		node->val = v; node->prev = NULL;
		if(head == NULL) {
			node->next = NULL;
			tail = node; head = node;
			return;
		}
		node->next = head; head->prev = node; head = node;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	tests {
		int n; cin >> n;
		LinkedList<int> l;
		while(n--) {
			int x; cin >> x;
			if(l.size == 0) {
				l.pb(x);
			} else {
				if(l.head->val > x) {
					l.pf(x);
				} else {
					l.pb(x);
				}
			}
		}
		for(auto it = l.head; it != NULL; it = it->next) {
			cout << it->val << " ";
		}
		cout << "\n";
	}
	return 0;
}
