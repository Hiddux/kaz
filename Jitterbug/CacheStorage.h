//
// Copyright © 2021 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef CacheStorage_h
#define CacheStorage_h

#include <CoreFoundation/CoreFoundation.h>

int cachePairingAdd(const char *udid, CFDataRef address, CFDataRef data);
int cachePairingUpdateAddress(const char *udid, CFDataRef address);
int cachePairingUpdateData(const char *udid, CFDataRef data);
int cachePairingRemove(const char *udid);
int cachePairingGetAddress(const char *udid, char address[static 200]);
int cachePairingGetData(const char *udid, void **data, size_t *len);

#endif /* CacheStorage_h */
