// DenseDataVector.tcc

namespace dataset
{
    template<typename ValueType>
    template<typename IndexValueIteratorType, typename concept>
    DenseDataVector<ValueType>::DenseDataVector(IndexValueIteratorType indexValueIterator) 
    {
        while(indexValueIterator.IsValid())
        {
            auto indexValue = indexValueIterator.Get();
            PushBack(indexValue.index, indexValue.value);
            indexValueIterator.Next();
        }
    }
}
