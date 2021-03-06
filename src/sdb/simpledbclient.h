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

#ifndef QTAWS_SIMPLEDBCLIENT_H
#define QTAWS_SIMPLEDBCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class SimpleDBClientPrivate;

class QTAWS_EXPORT SimpleDBClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SimpleDBClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SimpleDBClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SimpleDBBatchDeleteAttributesResponse * batchDeleteAttributes(const SimpleDBBatchDeleteAttributesRequest &request);
    SimpleDBBatchPutAttributesResponse * batchPutAttributes(const SimpleDBBatchPutAttributesRequest &request);
    SimpleDBCreateDomainResponse * createDomain(const SimpleDBCreateDomainRequest &request);
    SimpleDBDeleteAttributesResponse * deleteAttributes(const SimpleDBDeleteAttributesRequest &request);
    SimpleDBDeleteDomainResponse * deleteDomain(const SimpleDBDeleteDomainRequest &request);
    SimpleDBDomainMetadataResponse * domainMetadata(const SimpleDBDomainMetadataRequest &request);
    SimpleDBGetAttributesResponse * getAttributes(const SimpleDBGetAttributesRequest &request);
    SimpleDBListDomainsResponse * listDomains(const SimpleDBListDomainsRequest &request);
    SimpleDBPutAttributesResponse * putAttributes(const SimpleDBPutAttributesRequest &request);
    SimpleDBSelectResponse * select(const SimpleDBSelectRequest &request);

private:
    Q_DECLARE_PRIVATE(SimpleDBClient)
    Q_DISABLE_COPY(SimpleDBClient)

};

QTAWS_END_NAMESPACE

#endif
