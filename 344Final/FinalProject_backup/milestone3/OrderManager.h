#pragma once
// Manager Milestone - OrderManager Interface
// OrderManager.h
// Chris Szalwinski
#include <iostream>
#include <string>
#include <vector>

class ItemManager;
class CustomerOrder;

class OrderManager {
    std::vector<CustomerOrder> customerOrders;
public:
    void push_back(CustomerOrder&&);
    std::vector<CustomerOrder>::iterator begin();
    std::vector<CustomerOrder>::iterator end();
    const std::vector<CustomerOrder>::const_iterator cbegin() const;
    const std::vector<CustomerOrder>::const_iterator cend() const;
    void display(std::ostream&) const;
};

void validate(const OrderManager&, const ItemManager&, std::ostream&);