/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DYNAMODBCLIENT_H
#define QTAWS_DYNAMODBCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class DynamoDBClientPrivate;

class QTAWS_EXPORT DynamoDBClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DynamoDBClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DynamoDBClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DynamoDBBatchGetItemResponse * batchGetItem(const DynamoDBBatchGetItemRequest &request);
    DynamoDBBatchWriteItemResponse * batchWriteItem(const DynamoDBBatchWriteItemRequest &request);
    DynamoDBCreateTableResponse * createTable(const DynamoDBCreateTableRequest &request);
    DynamoDBDeleteItemResponse * deleteItem(const DynamoDBDeleteItemRequest &request);
    DynamoDBDeleteTableResponse * deleteTable(const DynamoDBDeleteTableRequest &request);
    DynamoDBDescribeLimitsResponse * describeLimits(const DynamoDBDescribeLimitsRequest &request);
    DynamoDBDescribeTableResponse * describeTable(const DynamoDBDescribeTableRequest &request);
    DynamoDBGetItemResponse * getItem(const DynamoDBGetItemRequest &request);
    DynamoDBListTablesResponse * listTables(const DynamoDBListTablesRequest &request);
    DynamoDBPutItemResponse * putItem(const DynamoDBPutItemRequest &request);
    DynamoDBQueryResponse * query(const DynamoDBQueryRequest &request);
    DynamoDBScanResponse * scan(const DynamoDBScanRequest &request);
    DynamoDBUpdateItemResponse * updateItem(const DynamoDBUpdateItemRequest &request);
    DynamoDBUpdateTableResponse * updateTable(const DynamoDBUpdateTableRequest &request);

private:
    Q_DECLARE_PRIVATE(DynamoDBClient)
    Q_DISABLE_COPY(DynamoDBClient)

};

QTAWS_END_NAMESPACE

#endif
