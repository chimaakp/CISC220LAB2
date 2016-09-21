/*
 * lab2lottery.hpp
 *
 *  Created on: Sep 21, 2016
 *      Author: Ryan
 */

#ifndef LAB2LOTTERY_HPP_
#define LAB2LOTTERY_HPP_


struct Customer{
    int custId;
    int numTickets;
    int lotteryNums [numTickets][3];
};

struct Store{
    int storeId = rand();
    int numCust;
    std::list<numCust> customerList;
    int numSold;
    int numWinners[3];
};

struct Owner{
    Store *Stores;
    int numStores = Stores/sizeof(int);
    int totalSold;
};

Owner *makeOwner();
Store makeStore();
Customer makeCustomer ();
void getWinners (int winners[]);
void findWinners(Owner *owner, int *ls);
int checkwin(int *nums, int *winners);

#endif /* LAB2LOTTERY_HPP_ */
