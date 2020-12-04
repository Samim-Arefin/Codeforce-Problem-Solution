#include<bits/stdc++.h>
#define Max 300005
std::vector<int> graph[Max];
std::bitset<Max> visited;
 
void dfs(int source)
{
	visited[source] = true;
	for (int i = 0; i < graph[source].size(); i++)
	{
		int node = graph[source][i];
		if (visited[node] == false)
		{
			dfs(node);
		}
	}
}

int main()
{
	    int size, num;
		std::cin >> size >> num;

		for (int i = 1; i < size; i++)
		{
			int temp;
			std::cin >> temp;
			graph[i].push_back(i + temp);
		}
		
		dfs(1);

		if (visited[num])
		{
			std::cout << "YES\n";
		}
		else
		{
			std::cout << "NO\n";
		}
}