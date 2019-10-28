// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2019, The LebCash Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <zedwallet/Types.h>

void syncWallet(CryptoNote::INode &node, std::shared_ptr<WalletInfo> walletInfo);

void checkForNewTransactions(std::shared_ptr<WalletInfo> walletInfo);
