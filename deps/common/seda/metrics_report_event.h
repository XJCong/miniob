/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by Longda on 2021/4/20.
//

#ifndef __COMMON_SEDA_METRICS_REPORT_EVENT_H__
#define __COMMON_SEDA_METRICS_REPORT_EVENT_H__

#include "common/seda/stage_event.h"

namespace common {
class MetricsReportEvent : public StageEvent {
public:
  MetricsReportEvent(){

  };

  ~MetricsReportEvent(){

  };
};
}  // namespace common
#endif  //__COMMON_SEDA_METRICS_REPORT_EVENT_H__
