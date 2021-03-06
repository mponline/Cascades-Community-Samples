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

#include <UserIdCacheItem.hpp>

UserIdCacheItem::UserIdCacheItem()
	: _userId("")
	, _emailAddress("")
	, _taskId(-1)
{}

UserIdCacheItem::~UserIdCacheItem() {}

QDataStream &operator<<(QDataStream &out, const UserIdCacheItem &userIdCacheItem)
{
	out << userIdCacheItem.getUserId()
		<< userIdCacheItem.getEmailAddress()
		<< userIdCacheItem.getTaskId();

	return out;
}

QDataStream &operator>>(QDataStream &in, UserIdCacheItem &userIdCacheItem)
{
	QString userId;
	QString emailAddress;
	int taskId;

	in >> userId >> emailAddress >> taskId;

	userIdCacheItem.setUserId(userId);
	userIdCacheItem.setEmailAddress(emailAddress);
	userIdCacheItem.setTaskId(taskId);

	return in;
}

const QString& UserIdCacheItem::getEmailAddress() const {
	return _emailAddress;
}

void UserIdCacheItem::setEmailAddress(const QString& emailAddress) {
	_emailAddress = emailAddress;
}

int UserIdCacheItem::getTaskId() const {
	return _taskId;
}

void UserIdCacheItem::setTaskId(int taskId) {
	_taskId = taskId;
}

const QString& UserIdCacheItem::getUserId() const {
	return _userId;
}

void UserIdCacheItem::setUserId(const QString& userId) {
	_userId = userId;
}
