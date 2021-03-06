/*
 * Copyright (c) 2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ENTITLEMENTCACHEITEM_HPP_
#define ENTITLEMENTCACHEITEM_HPP_

class EntitlementCacheItem
{
public:
	EntitlementCacheItem();
	virtual ~EntitlementCacheItem();
	int getCurrent() const;
	void setCurrent(int current);
	int getTotal() const;
	void setTotal(int total);
	int getYear() const;
	void setYear(int year);

	friend QDataStream &operator<<(QDataStream &out, const EntitlementCacheItem &entitlementCacheItem);
	friend QDataStream &operator>>(QDataStream &in, EntitlementCacheItem &entitlementCacheItem);

private:
	int _year;
	int _current;
	int _total;
};

#endif /* ENTITLEMENTCACHEITEM_HPP_ */
