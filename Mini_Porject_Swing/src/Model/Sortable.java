package Model;

public interface Sortable {
    public void sort(int sortType, int sortField);
    public int getSort();
    public void setSortType(int sortType);
    public void setSortField(int sortField);
}
