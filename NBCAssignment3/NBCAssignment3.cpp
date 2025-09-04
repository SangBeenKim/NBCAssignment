#include <iostream>
#include <string>
#include "Inventory.h"

using namespace std;

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Inventory<Item> inv(3);
    

    inv.AddItem(Item("롱소드", 50));
    inv.AddItem(Item("체력 포션", 32));
    inv.AddItem(Item("마나 포션", 55));
    inv.AddItem(Item("마나 포션", 55));
    inv.AddItem(Item("마나 포션", 55));
    inv.AddItem(Item("마나 포션", 55));
    inv.PrintAllItems();
    inv.RemoveLastItem();
    inv.RemoveLastItem();
    inv.PrintAllItems();
    inv.SortItems();
    inv.PrintAllItems();
}
