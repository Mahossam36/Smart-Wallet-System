#include "eyeicon.h"

eyeIcon::eyeIcon(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant eyeIcon::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex eyeIcon::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex eyeIcon::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int eyeIcon::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int eyeIcon::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant eyeIcon::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
