/*
 * SystemPart.h
 *
 *  Created on: 2013-4-29
 *      Author: fasiondog
 */

#ifndef SYSTEMPART_H_
#define SYSTEMPART_H_

#include "../../DataType.h"

namespace hku {

/**
 * 系统关联部件（各自策略）枚举定义，用于修改相关部件参数
 */
enum SystemPart {
    PART_ENVIRONMENT  = 0,   /**< 外部环境 */
    PART_CONDITION    = 1,   /**< 系统前提条件 */
    PART_SIGNAL       = 2,   /**< 信号产生器 */
    PART_STOPLOSS     = 3,   /**< 止损策略 */
    PART_TAKEPROFIT   = 4,   /**< 止赢策略 */
    PART_MONEYMANAGER = 5,   /**< 资金管理策略 */
    PART_PROFITGOAL   = 6,   /**< 盈利目标策略 */
    PART_SLIPPAGE     = 7,   /**< 移滑价差算法 */
    PART_INVALID      = 8,   /**< 无效值 */
};

string HKU_API getSystemPartName(int part);

SystemPart HKU_API getSystemPartEnum(const string& name);

} /* namespace */


#endif /* SYSTEMPART_H_ */
