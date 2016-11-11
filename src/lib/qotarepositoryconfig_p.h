/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt OTA Update module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QOTAREPOSITORYCONFIG_P_H
#define QOTAREPOSITORYCONFIG_P_H

#endif // QOTAREPOSITORYCONFIG_P_H

#include <QtCore/QObject>
#include <QtCore/QString>

QT_BEGIN_NAMESPACE

class QOtaRepositoryConfig;

class QOtaRepositoryConfigPrivate : public QObject
{
    Q_OBJECT
    Q_DECLARE_PUBLIC(QOtaRepositoryConfig)
public:
    QOtaRepositoryConfigPrivate(QOtaRepositoryConfig *repo);
    virtual ~QOtaRepositoryConfigPrivate();

    QOtaRepositoryConfig *repositoryConfigFromFile(const QString &configPath) const;
    bool repositoryConfigsEqual(QOtaRepositoryConfig *a, QOtaRepositoryConfig *b) const;

    // members
    QOtaRepositoryConfig *const q_ptr;
    QString m_url;
    bool m_gpgVerify;
    QString m_clientCertPath;
    QString m_clientKeyPath;
    bool m_tlsPermissive;
    QString m_tlsCaPath;
};

QT_END_NAMESPACE